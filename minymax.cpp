#include <stdio.h>
#include <stdlib.h>
#minimax
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

    printf("%d\n",vector[0]);
    printf("%d\n",vector[sizeof(vector)/sizeof(int)-1]);
    system("pause");
return 0;    
}


