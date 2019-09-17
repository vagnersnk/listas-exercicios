#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIM 30
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIM], i,soma=0,media=0;
    printf("Digite %i notas de alunos",LIM);

    for (i = 0; i < LIM; i++){
        scanf("%d",&vetor[i]);

    }
    for (i = 0; i < LIM; i++){
        soma += vetor[i];
    }
    media= soma/LIM;
    printf("MEDIA = [%d]\n",media);
    for (i = 0; i < LIM; i++){
        if(vetor[i] > media){
            printf("Nota = %d esta acima da media\n",vetor[i]);
        }

    }
    
    return 0;
}