#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int padovan(int n){
	if (n > 2)
		return padovan(n-2) + padovan(n-3);
	else if (n == 2)
		return 1;
	else if (n == 1)        
		return 1;
	else if (n == 0)
		return 1;
	else
		return -1;
}
int fibonacci(int n){
	if (n > 2)
		return fibonacci(n-1) + fibonacci(n-2);
	else if (n == 2)
		return 1;
	else if (n == 1)        
		return 1;
	else if (n == 0)
		return 0;
	else
		return -1;
}

int main(){
	int iteraciones = 0;
	printf("Este programa intercalará valores de la sucesión de fibonacci junto con la sucesión de padovan\n");
	printf("Ingrese un máximo numero de iteraciones por cada sucesión\n");
	fflush(stdin);
	scanf("%d",&iteraciones);
	printf("padovan:\n");
	for (int i = 0 ; i < iteraciones ; i++ ){
		printf("%d ",padovan(i));
	}
	printf("\nfiibonacci:\n");
	for (int i = 0 ; i < iteraciones ; i++ ){
		printf("%d ",fibonacci(i));
	}
	printf("\nmezcla:\n");
	for (int i = 0 ; i < iteraciones ; i++ ){
		printf("%d ",padovan(i));
		printf("%d ",fibonacci(i+1));
		i++;
	}
	getch();
}
