#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float porcentaje = 0;


float interesCompuesto(int periodos, float pesos){
	if (periodos >= 2)
		return interesCompuesto(periodos-1, interesCompuesto(1,pesos));
	else if (periodos == 1){
        printf("%.2f\n",pesos + (pesos * porcentaje / 100));
		return pesos + (pesos * porcentaje / 100);
	}
	else if (periodos== 0)
		return 0;
	else
		return -1;
}

int main(){
	int periodos = 0;
	float pesos = 0;
	printf("ingrese la cantidad de periodos (entero)");
	fflush(stdin);
	scanf("%d",&periodos);
	printf("ingrese el dinero inicial (decimal)");
	fflush(stdin);
	scanf("%f",&pesos);
	printf("ingrese el porcentaje de interes por periodo");
	fflush(stdin);
	scanf("%f",&porcentaje);
	interesCompuesto(periodos, pesos);
	getch();
	
}
