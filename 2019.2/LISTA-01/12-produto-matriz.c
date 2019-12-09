#include <stdio.h>

#define LIN 2
#define COL 2



int main() {
    int matrixone[LIN][COL],matrixtwo[LIN][COL],matrixfin[LIN][COL],i,j,k,mult,soma;

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

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            matrixfin[i][j]=0;
            for(k=0;k<LIN;k++){
                matrixfin[i][j] = matrixfin[i][j]+matrixone[i][k] * matrixtwo[k][j];
            }


        }

    }

    printf("\n>> RESULTADO\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d]",matrixfin[i][j]);
        }
        printf("\n");
    }



    return 0;
}