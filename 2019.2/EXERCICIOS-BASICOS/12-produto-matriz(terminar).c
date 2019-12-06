#include <stdio.h>

#define LIN 2
#define COL 2



int main() {
    int matrixone[LIN][COL],matrixtwo[LIN][COL],matrixfin[LIN][COL],i,j,mult,soma;

    //LER MATRIZ 1
    printf("\n>> INSIRA A PRIMEIRA MATRIZ\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%d",&matrixone[i][j]);
        }
    }
    //LER MATRIZ 2
    printf("\n>> INSIRA A SEGUNDA MATRIZ\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%d",&matrixtwo[i][j]);
        }
    }


    //MULTIPLICAR MATRIZES
    mult=0;
    soma =0;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){

            printf("%d * %d\n",matrixone[i][j],matrixtwo[j][i]);
        }
        soma += mult;
       
    }



    return 0;
}