#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIML 3
#define LIMC 3
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIML][LIMC],l,c,entrada,soma=0;


    for (l = 0; l < LIML; l++){
        for(c=0;c<LIMC;c++){
            printf("Digite o valor do [%d][%d]",l,c);
            scanf("%d",&vetor[l][c]);
        }


    }
    printf("Insira a linha");
    scanf("%d",&entrada);
    if(entrada>LIML){
        printf("Linha invalida\n[PROGRAMA ENCERRADO]");
        return 0;
    }
    for (l = 0; l < LIML; l++){
        soma += vetor[entrada][l];


    }
    printf("Resultado da soma= %d\n",soma);





    return 0;
}
