#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],vetor_ni[REAGENTE_LIMITANTE],count=0,vetor_san[REAGENTE_LIMITANTE+REAGENTE_LIMITANTE],i,j,valor,valor2;
    printf("LISTA 1\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }
    printf("LISTA 2\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_ni[i]);

    }

    for (i = 0; i < REAGENTE_LIMITANTE; i++) {
                vetor_san[i] = vetor_iti[i];

    }
    for (j=0;j<REAGENTE_LIMITANTE;j++) {
                vetor_san[j+REAGENTE_LIMITANTE] = vetor_ni[j];

    }

    for (i = 0; i < REAGENTE_LIMITANTE*2; i++) {
            printf("[%d]",vetor_san[i]);


    }







    return 0;
}

