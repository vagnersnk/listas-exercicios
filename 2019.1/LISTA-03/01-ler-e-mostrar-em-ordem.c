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
    for (i = 0; i < LIM; i++){
        printf("[%d]",vetor[i]);
    }





    return 0;
}
