#include<stdio.h>
#include<stdlib.h>
#define TAM 10
void ingreso (int vect[]);
void minmax (int vect[],int*max,int*min);
main(){
    int vect[TAM];
    int max,min;
    printf ("ingrese 10 numeros enteros\n");
    ingreso(vect);
    system("cls");
    minmax (vect,&max,&min);
    printf ("El numero maximo ingresado es: %d",max);
    printf ("\n");
    printf ("El numero minimo ingresado es: %d",min);
    printf ("\n");
    system("pause");
    return 0; 
    }
    
 void ingreso (int vect[]){
        int i=0;
        for(i=0;i<TAM;i++)
        scanf("%d",&vect[i]);
        return;}   

 void minmax (int vect[],int*max,int*min){
    int i=0;
    for(i=0;i<TAM;i++){
        if (i==0){
           *max=vect[i];
           *min=vect[i];}
        if(vect[i]>*max)
       *max=vect[i];
       if(vect[i]<*min)
       *min=vect[i];
        }
    
    return;
    
    }
 
 
