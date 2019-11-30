#include <stdio.h>

//alunos
#define LIN 5
//notas
#define COL 3



int main() {
    int lista[LIN][COL],i,j,soma=0,valor=0,medias[COL],aux;

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&lista[i][j]);

        }
    }



    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            soma += lista[i][j];
        }
        valor= soma/3;
        medias[i]= valor;
        soma =0;




    }
    for(i=0;i<LIN-1;i++){
        for(j=i+1;j<LIN;j++){
            if(medias[i]>medias[j]){
                aux = medias[j];
                medias[j] = medias[i];
                medias[i] = aux;
            }
        }


    }


    for(i=0;i<LIN;i++){
        printf("[%d]",medias[i]);
    }


















    return 0;
}