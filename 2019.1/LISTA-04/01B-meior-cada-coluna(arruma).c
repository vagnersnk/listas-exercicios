#include <stdio.h>
#include <stdlib.h>

#define LINHA 2
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA],i,j,maiorj;
    printf("INSIRA %d VALORES\nnas posicoes: \n",LINHA*COLUNA);
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);

        }

    }

    for(j=0;j<COLUNA;j++){
        maiorj = matriz[0][j];
        for(i=0;i<LINHA;i++){
            if(matriz[i][j] >maiorj){
                maiorj = matriz[i][j];
            }
            printf(">> maior valor da coluna [%d] foi [%d]\n",j,maiorj);

        }



    }



    printf(">> EXIBINDO MATRIX\n");
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("|%d|",matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}
