#include <stdio.h>

#define LIN 5
#define COL 5



int main() {
    int matrixone[LIN][COL],trasnposta[LIN][COL],i,j;

    //LER MATRIZ
    printf("\n>> INSIRA A  MATRIZ\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%d",&matrixone[i][j]);
        }
    }



    //TRANSPOSTA MATRIZES
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            trasnposta[i][j] = matrixone[j][i];
        }


    }

    //EXIBIR TRANSPOSTA
    printf("\n>> EXIBINDO TRANSPOSTA\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf(" [%d]\t",trasnposta[i][j]);

        }
        printf("\n");
    }

    


    return 0;
}