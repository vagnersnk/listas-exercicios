#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIM 10
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIM], i;
    printf("Digite %i valores",LIM);

    for (i = 0; i < LIM; i++){
        scanf("%d",&vetor[i]);

    }
    printf("LISTANDO OS PARES: ");
    for (i = 0; i < LIM; i++){
        if(vetor[i] %2 == 0){
            printf("[%d]",vetor[i]);
        }

    }





    return 0;
}