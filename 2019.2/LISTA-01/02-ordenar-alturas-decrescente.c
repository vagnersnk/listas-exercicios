#include <stdio.h>


#define MAX 5



int main() {
    int i,j,aux;
    float lista[MAX];
    for(i=0;i<MAX;i++){
        printf("[%d]:",i);
        scanf("%f",&lista[i]);
    }

    for(i=0;i<MAX-1;i++){
        for(j=i+1;j<MAX;j++){
            if(lista[i] < lista[j]){
                aux = lista[j];
                lista[j] = lista[i];
                lista[i]= aux;
            }
        }

    }



    for(i=0;i<MAX;i++){
        printf("[%f]",lista[i]);
    }



    return 0;
}