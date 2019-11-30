#include <stdio.h>


#define LIN 4
#define COL 30



int main() {
    int lista[LIN][COL],i,j,maior;

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&lista[i][j]);

        }
    }
  
  
    for(i=0;i<LIN;i++){
        maior = lista[0][0];
        for(j=0;j<COL;j++){
           if(lista[i][j] > maior){
               maior = lista[i][j];
           }


        }
        printf("maior do %d trimestre foi: %d\n",i+1,maior);
    }


