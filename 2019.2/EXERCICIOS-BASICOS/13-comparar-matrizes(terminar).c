#include <stdio.h>

#define LIN 2
#define COL 2



int main() {
    int matrixone[LIN][COL],matrixtwo[LIN][COL],i,j,start;

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



    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            if(matrixone[i][j] == matrixtwo[i][j]){
                printf("1:[%d] = 2:[%d]\n",matrixone[i][j],matrixtwo[i][j]);
                break;
            }


        }
     

    }




    return 0;
}