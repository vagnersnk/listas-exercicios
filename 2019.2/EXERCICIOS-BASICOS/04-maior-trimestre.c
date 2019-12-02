#include <stdio.h>

//produtos
#define LIN 30
//Trimestre
#define COL 4



int main() {
    int lista[LIN][COL], i, j, maiortri,menorpro,somaprod,somatrime,maior;
    int produtos[LIN];
    int trimestre[COL];

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("[%d][%d]:", i, j);
            scanf("%d", &lista[i][j]);

        }
    }
  
    somaprod = 0;
    maior = lista[0][0];
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            somaprod += lista[i][j];
            if(lista[i][j] > maior){
                maior = lista[i][j];
            }
        }
        produtos[i] = somaprod;
        somaprod = 0;

    }
    //SOMA TRISMESTRE
    somatrime = 0;
    for (j = 0; j < COL; j++) {
        for (i = 0; i < LIN; i++) {
            somatrime += lista[i][j];
        }
        trimestre[j] = somatrime;
        somatrime = 0;

    }
    // trimestre maior vendagem
    maiortri = produtos[0];
    for(i=1;i<LIN;i++){
        if(trimestre[i] > maiortri){
            maiortri = trimestre[j];
        }
    }
    // produto menor vendagem
    menorpro = produtos[0];
    for(j=1;j<COL;j++){
        if(produtos[j] < menorpro){
            menorpro = trimestre[j];
        }
    }

    printf("\n>> RESULTADOs\n");
    printf("a) trimestre maior vendagem %d\n",maiortri);
    printf("b) produto menor vendagem %d\n",menorpro);
    printf("c) produto/trimestre maior vendagem %d\n",maior);

    return 0;
}
