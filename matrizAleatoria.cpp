#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define N 10

int matriz[N][N];

void llenarMatriz(){
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j]=rand() % 2;
		}
	}
}
	
int main(){
	srand(time(NULL));   // llamar una vez para establecer la semilla
	llenarMatriz();
	getch();
	
}
