#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define maxR 16 //sizeof(A) * sizeof(B), pero C no permite variables para definir tamaño de arrays

char A[] = {'1', '2', '5', '8'};
char B[] = {'A', 'B', 'R', 'Z'};
int sizeA = sizeof(A);
int sizeB = sizeof(B);
char rel[maxR][2]; //array con los pares ordenados de las relaciones:


//Devuelve 1 si encuentra el input entre los conjuntos
int verificarInputEnConjuntos(char input){
	int flag = 0;
	for (int i=0 ; i<sizeA ; i++){
		if (input == A[i]){ //no pude con strcmp
			flag = 1;
		}
	}
	for (int i=0 ; i<sizeB ; i++){
		if (input == B[i]){ //no pude con strcmp
			flag = 1;
		}
	}
	return flag;
}
void ingresarRelaciones(){
	char input = 0;
	int i = 0;
	int j = 0;
	while (input != 10){
		printf("Ingrese un elemento\n");
		fflush(stdin);
		scanf("%c",&input);
		input = toupper(input);
		if(verificarInputEnConjuntos(input)){
			rel[i][j] = input;
			if (j){
				i++;
				if (i == 16) break;
				j = 0;
			}
			else j++;
		}
		else printf("ese elemento no pertenece a los conjuntos...\n");
	}
}
void mostrarR(){
	for(int i=0; i<maxR;i++){
		printf("(%c, ",rel[i][0]);
		printf("%c)\n",rel[i][1]);
	}
}
void reflexividad(){
	printf("la relación es reflexiva si cada elemento del dominio está en relación con si mismo\n");
	int i = 0;
	int eureka = 0;
	while (rel[i][0] != 0){
		for (int j=0;j<16;j++){
			if (rel[i][0] == rel[j][0] && rel[j][0] == rel[j][1]){
				eureka++;
				break;
			}
		}
		i++;
	}
	if (eureka == i){
		printf("la relación definida es reflexiva\n");
	}
	else printf("la relación definida no es reflexiva\n");
}


void antisimetria(){
	printf("la relación es antisimétrica si para un par (a,b) existe (b, a) y esto implica a=b\n");
	printf("si existe (a, b) pero no existe (b, a), es antisimétrica por falsedad del antecedente\n");
	int i = 0;
	int noes = 0;
	while (rel[i][0] != 0){
		if (rel[i][0] != rel[i][1]){
			for (int j= 0; j<16; j++){
				if (rel[j][0] == rel[i][1] && rel[j][1] == rel[i][0]){
					noes++;
				}
			}
		}
		i++;
	}
	if (noes == 0){
		printf("la relación definida es antisimétrica\n");
	}
	else printf("la relación definida no es antisimétrica\n");
}

void transitividad(){
	printf("la relación es transitiva cuando existe (a,b), (b,c) y (a,c)\n");
	printf("c, bien puede ser a => (a,b)(b,a)(a,a)\n");
	int i = 0;
	int eureka = 0;
	while (rel[i][0] != 0){
		for (int j= 0; j<16; j++){
			if (rel[i][1] == rel[j][0]){
				for (int k=0; k<16; k++){
					if (rel[k][0] == rel[i][0] && rel[j][1] == rel[k][1]){
						eureka++;
					}
				}
			}
		}
		i++;
	}
	if (eureka == ?){
		printf("la relación definida es transitiva\n");
	}
	else printf("la relación definida no es transitiva\n");
}


int main(){
	//printf("%d\n\n",rel[0][0]);
	ingresarRelaciones();
	mostrarR();
	reflexividad();
	antisimetria();
	printf("\nfin");
	getch();
}
