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
int numeroDeAristas(int N, int matriz[N][N]){
	int nroAristas = 0;
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if (matriz[i][j]) nroAristas++;
		}
	}
	return nroAristas;
}
int numeroDeLazos(int N, int matriz[N][N]){
	int nroLazos = 0;
	for (int i=0;i<N;i++){
		if (matriz[i][i]) nroLazos++;
	}
	return nroLazos;
}
void gradoDeVertices(int N, int matriz[N][N]){
	int grado = 0;
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			if (matriz[i][j]) grado++;
		}
		for(int j=0;j<N;j++){
			if (matriz[j][i]) grado++;
		}
		printf("el grado del vertice %d es %d\n", i+1, grado);
		grado = 0;
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
	printf("Tiene %d aristas\n",numeroDeAristas(N, matriz));
	printf("Tiene %d lazos\n",numeroDeLazos(N, matriz));
	gradoDeVertices(N, matriz);
	getch();
	
}
