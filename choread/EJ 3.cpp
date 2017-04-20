#include<stdio.h>
#include<stdlib.h>
#define TAM 20
void ingreso (int vect[]);
void paridad(int vect[],int vectpar[],int vectimpar[],int *a,int*b);
void mostrarp(int vectpar[],int *a);
void mostrari(int vectimpar[],int *b);

main(){
    int vect[TAM];
    int vectpar[TAM];
    int vectimpar[TAM];
    int max,min;
    int a=0, b=0; //CONTADORES
    
    printf ("ingrese 20 numeros enteros\n");
    ingreso(vect);
    system("cls");
    paridad(vect,vectpar,vectimpar,&a,&b);
    printf("El vector par es:");
    printf ("\n");
   mostrarp(vectpar,&a);
    printf("El vector impar es:");
    printf ("\n");
    mostrari(vectimpar,&b);
    system("pause");
    return 0; 
    }
    
 void ingreso (int vect[]){
        int i=0;
        for(i=0;i<TAM;i++)
        scanf("%d",&vect[i]);
        return;}   

void paridad(int vect[],int vectpar[],int vectimpar[],int *a,int*b){
    int i;
    float resto;
    for(i=0;i<TAM;i++){
        resto=vect[i]%2;
        if (resto==0){
         vectpar[*a]=vect[i];
   (*a)++;} 
         else {
        vectimpar[*b]=vect[i];
   (*b)++;}}
    return;
    }
 
 void mostrarp(int vectpar[],int *a){
    int i=0;
    for(i=0;i<*a;i++){
    printf ("%d",vectpar[i]);
    printf ("\n");}
    return;
    }
 void mostrari(int vectimpar[],int *b){
    int i=0;
    for(i=0;i<*b;i++){
    printf ("%d",vectimpar[i]);
    printf ("\n");}
    return;
    }
