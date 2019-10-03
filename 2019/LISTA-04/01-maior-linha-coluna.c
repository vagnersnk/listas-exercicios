#include <stdio.h>
#include <stdlib.h>

#define LINHA 2
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA],i,j,maiori,maiorj;
    printf("INSIRA %d VALORES\nnas posicoes: \n",LINHA*COLUNA);
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);

        }

    }
    maiori,maiorj = matriz[0][0];
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            if(matriz[i][j] > maiori){
                maiori = matriz[i][j];
            }

        }
        printf(">> maior valor da linha [%d] foi [%d]\n",i,maiori);
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
