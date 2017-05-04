#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int padovan(int n)
{
	if (n > 2)
		return padovan(n-2) + padovan(n-3);
	else if (n == 2)
		return 1;
	else if (n == 1)        
		return 1;
	else if (n == 0)
		return 1;
}

int main(){
	int valorIngresado;
	
	printf("Ingrese un valor máximo:\n");
	fflush(stdin);
	scanf("%d",&valorIngresado);
	for(int i=0; i < valorIngresado; i++){
		printf("%d ",padovan(i));
	}   
	getch();
}
