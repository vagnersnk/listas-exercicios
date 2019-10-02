#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIM 4
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIM], i,maior,menor,indice1=0,indice2=0;
    printf("Digite %i valores",LIM);

    for (i = 0; i < LIM; i++){
        scanf("%d",&vetor[i]);

    }
    maior= vetor[0];
    menor= vetor[0];
    for (i = 1; i < LIM; i++){
       if(vetor[i]>maior){
            maior = vetor[i];
            indice1 = i;
        }
        if(vetor[i]<menor){
            menor = vetor[i];
            indice2 = i;
        }
    }
    printf("O maior valor [%i] se encontra no indice [%d]\no menor valor  [%i] se encontra no indice [%d]",maior,indice1+1,menor,indice2+1);



    return 0;
}

