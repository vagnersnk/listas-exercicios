#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIM 10
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIM], i,parcount=0;
    printf("Digite %i valores",LIM);

    for (i = 0; i < LIM; i++){
        scanf("%d",&vetor[i]);

    }

    for (i = 0; i < LIM; i++){
        if(vetor[i] %2 == 0){
            parcount += 1;

        }

    }
    printf("LISTADO QUANTIDADES:\n [%d] PARES\n[%d] IMPARES",parcount,LIM-parcount);





    return 0;
}
