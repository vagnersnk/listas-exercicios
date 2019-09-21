#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],vetor_ni[REAGENTE_LIMITANTE],i,l,n;

    printf("PRIMEIRA LISTA\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }
    printf("SEGUNDA LISTA LISTA\n");

    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_ni[i]);

    }
    l=n = 0;
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        l = vetor_iti[i];
        n= vetor_ni[i];
        vetor_iti[i] = n ;
        vetor_ni[i] = l;

    }
    printf("EXIBINDO\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d]",vetor_iti[i]);
    }
    printf("\n-------\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d]",vetor_ni[i]);
    }




    return 0;
}
