#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int factorial(int n){
	if(n == 0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main(){
	int n;
	printf("Ingrese un valor:\n");
	fflush(stdin);
	scanf("%d",&n);
	printf("El factorial de %d es: %d\n", n, factorial(n));
	getch();
}
