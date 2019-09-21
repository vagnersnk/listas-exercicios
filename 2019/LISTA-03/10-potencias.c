#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],vetor_ni[REAGENTE_LIMITANTE],i;


    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        vetor_ni[i] = vetor_iti[i] * vetor_iti[i];
    }
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d]",vetor_ni[i]);
    }




    return 0;
}