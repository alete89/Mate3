#include <stdio.h>
#include <conio.h>

int main()
{
	int n, noEsPrimo = 0;
	
	printf("Ingrese un entero positivo:\n");
	fflush(stdin);
	scanf("%d", &n);
	
	for(int i = 2; i <= (n / 2); ++i){
		if(n%i == 0){
			noEsPrimo = 1;
			break;
		}
	}
	if (noEsPrimo)
		printf("%d no es primo",n);
	else
		printf("%d es primo",n);
	getch();
}
