#include <stdio.h>
#include <stdlib.h>
void ingresar(int vec[], int i){
        fflush(stdin);
       scanf("%d",&vec[i]);
}

void ordenar(int vec[]){
    for (int j=0;j<9;j++){
        for (int i=0;i < 9-j;i++){
            if(vec[i]>vec[i+1]){
                 vec[i]=vec[i]^vec[i+1];
                 vec[i+1]=vec[i]^vec[i+1];
                 vec[i]=vec[i]^vec[i+1];
    }}}
}

int main(){
    int vector[] = {5,2,10,23,9,15,35,128,5530,64};
    printf("ingrese 10 numerox\n");
    for(int i=0;i<10;i++){
     //   ingresar(vector, i);   
    }
    ordenar(vector);
    for(int i=0;i<10;i++){
        printf("%d\n",vector[i]);
    }
    printf("\n");
        for(int i=9;i>=0;i--){
        printf("%d\n",vector[i]);
    }
    getchar();
    system("pause");
return 0;    
}


