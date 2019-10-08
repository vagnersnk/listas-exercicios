#include <stdio.h>
#define LINHA 4
#define COLUNA 4

int main() {
    // Questão a: entrada de dados
    int matriz[LINHA][COLUNA],soma=0,menor,pares=0,l,c,entrada;
    printf("Insira %d valores:\n",LINHA*COLUNA);
    for(l=0;l<LINHA;l++){
        for(c=0;c<COLUNA;c++){
            printf(">> [%d][%d]",l,c);
            scanf("%d",&matriz[l][c]);
        }
    }
    // Questão b: somatoria diagonal principal
    for(l=0;l<LINHA;l++){
        soma += matriz[l][l];
    }
    printf("A soma da diagonal principal foi : [%d] \n",soma);

    // Questão c: menor valor coluna digitada
    printf("Insira uma coluna para achar o menor valor: ");
    scanf("%d",&entrada);
    menor = matriz[0][entrada];
    for(l=0;l<LINHA;l++){
        if(matriz[l][entrada] < menor){
            menor = matriz[l][entrada];
        }
    }
    printf("O menor valor da coluna [%d] foi [%d]\n",entrada,menor);

    // Questão d: quantidade de pares
    for(l=0;l<LINHA;l++){
        for(c=0;c<COLUNA;c++){
            if(matriz[l][c] % 2 == 0){
                pares++;
            }
        }
    }
    printf("a matriz possui [%d] numeros pares",pares);


    return 0;
}