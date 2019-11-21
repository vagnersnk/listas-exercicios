#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],vetor_ni[REAGENTE_LIMITANTE],i,j,t;
    printf("MATRICULA\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }
    printf("NOTAS\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_ni[i]);

    }


    for (i = 0; i < REAGENTE_LIMITANTE; i++) {
        for(j=i+1;j<REAGENTE_LIMITANTE;j++){
            t = vetor_iti[i];
            vetor_iti[i] = vetor_iti[j];
            vetor_ni[i] = vetor_ni[j];
            vetor_ni[j] = t;
            vetor_iti[j] = t;

        }


    }
    printf("MATRICuLA\n");
    for (i=0;i<REAGENTE_LIMITANTE;i++) {
        printf("[%d]\t",vetor_iti[i]);

    }
    printf("NOTAS\n");
    for (i=0;i<REAGENTE_LIMITANTE;i++) {
        printf("[%d]\t",vetor_ni[i]);

    }


    return 0;
}
