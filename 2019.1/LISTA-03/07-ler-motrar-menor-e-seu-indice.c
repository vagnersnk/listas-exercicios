#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIM 10
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIM], i,maior,indice=0;
    printf("Digite %i valores",LIM);

    for (i = 0; i < LIM; i++){
        scanf("%d",&vetor[i]);

    }
    maior= vetor[0];
    for (i = 1; i < LIM; i++){
       if(vetor[i]<maior){
           maior = vetor[i];
           indice = i;
       }
    }
    printf("O menor valor [%i] se encontra no indice [%d]",maior,indice+1);



    return 0;
}

