#include <stdio.h>

#define LIN 2
#define COL 2



int main() {
    int matrixone[LIN][COL],matrixtwo[LIN][COL],i,j,k,l;

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
            for(k=0;k<LIN;k++){
                for(l=0;l<COL;l++){
                    if(matrixone[i][j] == matrixtwo[k][l]){
                        printf("[%d] = [%d]\n",matrixone[i][j],matrixtwo[k][l]);
                        break;
                }
              }
            }
          }
        }




    return 0;
}