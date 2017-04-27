#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fibonacci(int n)
{
	if (n > 2)
		return fibonacci(n-1) + fibonacci(n-2);
	else if (n == 2)
		return 1;
	else if (n == 1)        
		return 1;
	else if (n == 0)
		return 0;
}

int main(){
	int valorIngresado;
	
	printf("Ingrese un valor máximo:\n");
	fflush(stdin);
	scanf("%d",&valorIngresado);
	printf("0, 1");
	for(int i=2; i < valorIngresado; i++){
		printf(", %d",fibonacci(i));
	}   
	getch();
}
