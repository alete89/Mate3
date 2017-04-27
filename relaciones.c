#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct matriz{
	int conjuntoDePartida[4];
	char conjuntoDeLlegada[4];
};
struct relaciones{
	int dominio[16];
	char imagen[16];
};
int verificarInt(int elemento,int primerConjunto[]){
	int j=1;
	for(int i=0; i < sizeof(primerConjunto); i++){
		if(primerConjunto[i] == elemento){
			j=0;
			break;
		}
	}
	if(!j){
		printf("No era un valor del primer conjunto\n");
	}
	return j;
}
int verificarChar(char elemento,char segundoConjunto[]){
	int j=1;
	for(int i=0;i<sizeof(segundoConjunto);i++){
		if(segundoConjunto[i]==elemento){
			j= 0;
			break;
		}
	}
	if(!j){
		printf("No era un valor del segundo conjunto\n");
	}
	return j;
}



void pedirElemento1(int *unElemento){
	printf("Ingrese un valor del primer conjunto:\n");  
	fflush(stdin);
	scanf("%d",unElemento);
}
void pedirElemento2(char *unElemento){        
	printf("Ingrese el valor del segundo conjuto:\n");
	fflush(stdin);
	scanf("%c",unElemento);    
}
void establecerRelaciones(int *conjuntoPartida, char *conjuntoLlegada){
	printf("\nPara establecer relaciones, ingrese un valor de cada conjunto\n");
	printf("cuando haya establecido la última, presione +");
	int elementoDePrimerConjunto = 0;
	char elementoDeSegundoConjunto;
	struct matriz mat;
	struct relaciones rel;
	int indice = 0;
	int condicion = 1;
	while(condicion){
		do{
			pedirElemento1(&elementoDePrimerConjunto);
			rel.dominio[indice] = elementoDePrimerConjunto;
		} while(verificarInt(elementoDePrimerConjunto,conjuntoPartida));
		do{
			pedirElemento2(&elementoDeSegundoConjunto);
			rel.imagen[indice] = elementoDeSegundoConjunto;
		} while(verificarChar(elementoDeSegundoConjunto,conjuntoLlegada));
		indice++;
		condicion = 0;
		printf("ingresar otra relación? 1=> Si, 0=> No");
		fflush(stdin);
		scanf("%d",&condicion);
	}
	
}
void mostrarConjuntos(int conjuntoPartida[],char conjuntoLlegada[]){
	int sizeArray;
	sizeArray=sizeof(conjuntoPartida);
	
	printf("El conjunto 1 es:\n");

	for(int i=0;i<sizeArray;i++){
		printf("%d, ",conjuntoPartida[i]);
	}

	sizeArray=sizeof(conjuntoLlegada);
	printf("\nEl conjunto 2 es:\n");
	for(int i=0;i<sizeArray;i++){
		printf("%c, ",conjuntoLlegada[i]);
	}
}
int main(){
	int conjuntoPartida[4] = {1,2,3,8};
	char conjuntoLlegada[4] = {'a','b','j','k'};

	int elementoDePrimerConjunto;
	char elementoDeSegundoConjunto;
	
	mostrarConjuntos(conjuntoPartida,conjuntoLlegada);

	establecerRelaciones(conjuntoPartida, conjuntoLlegada);

	getch();
}
