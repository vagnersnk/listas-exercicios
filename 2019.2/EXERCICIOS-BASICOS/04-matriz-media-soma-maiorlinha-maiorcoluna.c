#include <stdio.h>


#define LIN 20
#define COL 10



int main() {
    int lista[LIN][COL],i,j,maiorl,soma=0,k=0;

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&lista[i][j]);

        }
    }



    for(i=0;i<LIN;i++){
        maiorl = lista[0][0];
        
        for(j=0;j<COL;j++){
            soma += lista[i][j];

           if(lista[i][j] > maiorl){
               maiorl = lista[i][j];
           }

        }

        printf("maior da %d linha foi: %d\n",i,maiorl);

    }
    printf("soma da matriz = %d\n",soma);
    printf("media da matriz = %d\n",soma/LIN*COL);











    return 0;
}