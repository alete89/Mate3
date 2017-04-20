#include<stdio.h>
#include<stdlib.h>
#define TAM 10
void ingreso (int vect[]);
void mostrar (int vect[]);
void ordenar (int vect[]);
main(){
    int vect[TAM];
    printf ("ingrese 10 numeros enteros\n");
    ingreso(vect);
    system("cls");
    ordenar(vect);
    printf ("El vector ordenado de menor a mayor es: ");
    mostrar(vect);
    
    system("pause");
    return 0; 
    }
    
 void ingreso (int vect[]){
        int i=0;
        for(i=0;i<TAM;i++)
        scanf("%d",&vect[i]);
        return;}   
void mostrar (int vect[]){
    int i=0;
    for(i=0;i<TAM;i++){
    printf ("%d",vect[i]);
    printf ("\n");}
    return;
    }
 
 void ordenar (int vect[]){
        
        int i;
        int j;
        int temp;
        
        for (i=1; i<TAM; i++)
        for (j=0 ; j<TAM-1; j++){
        if(vect[j]>vect[j+1]){
        temp=vect[j];
        vect[j]=vect[j+1];
        vect[j+1]=temp;
        }}
        
        return;
        }
 
