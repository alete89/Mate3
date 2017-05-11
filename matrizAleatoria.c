#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


void llenarMatriz(int N, int matriz[N][N]){
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j]=rand() % 2;
		}
	}
}
void mostrarMatriz(int N, int matriz[N][N]){
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int N;
	printf("Ingrese N para generar una matriz aleatoria de NxN\n");
	scanf("%d",&N);
	fflush(stdin);
	int matriz[N][N];
	srand(time(NULL));   // llamar una vez para establecer la semilla
	llenarMatriz(N, matriz);
	mostrarMatriz(N, matriz);
	getch();
	
}
