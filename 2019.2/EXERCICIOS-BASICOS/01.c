#include <stdio.h>


#define MAX 20



int main() {
    int lista[MAX],i,ma;
    for(i=0;i<MAX;i++){
        printf("[%d]:",i);
        scanf("%d",&lista[i]);
    }
    ma = lista[0];
    for(i=1;i<MAX;i++){
        if(lista[i]> ma){
            ma = lista[i];
        }


    }
    printf("Maior idade: %d",ma);


    return 0;
}