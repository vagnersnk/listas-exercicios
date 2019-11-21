#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],vetor_ni[REAGENTE_LIMITANTE],vetor_san[REAGENTE_LIMITANTE],i;

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

    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        vetor_san[i] =  vetor_iti[i]*vetor_ni[i];


    }
    printf("EXIBINDO\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d]",vetor_san[i]);
    }





    return 0;
}
