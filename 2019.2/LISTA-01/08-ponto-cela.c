#include <stdio.h>

#define LIN 3
#define COL 3



int main() {
    int matrix[LIN][COL],i,j;
    int maiores[LIN],colmax[COL],maior,maiorcol;

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    //print matriz
    printf("\n>> IMPRIMINDO MATRIZ\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d]\t",matrix[i][j]);

        }
        printf("\n");
    }
    //end print

    //MAIORES LINHAS
    maior = matrix[0][0];
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            if(matrix[i][j]>maior){
                maior= matrix[i][j];
            }
            maiores[i] = maior;

        }
    }
    //MAIORES COLUNAS
    maiorcol = matrix[0][0];
    for(j=0;j<COL;j++){
        for(i=0;i<LIN;i++){
            if(matrix[i][j] > maiorcol){
                maiorcol = matrix[i][j];
            }
            colmax[j] = maiorcol;

        }
    }


    for(i=0;i<LIN;i++){
        if(maiores[i] > colmax[i]){
            printf("\n>>PONTO CELA na linha:  -- %d [%d]\n",i,maiores[i]);
        }
        if(maiores[i] == colmax[i]){
            printf("\n>>PONTO CELA na linha:%d -- [%d]\n",i,maiores[i]);
        }
    }





    return 0;
}