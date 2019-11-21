#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],i,j,t;
    printf("LISTA 1\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }


    for (i = 0; i < REAGENTE_LIMITANTE; i++) {
        for(j=i+1;j<REAGENTE_LIMITANTE;j++){
            t = vetor_iti[i];
            vetor_iti[i] = vetor_iti[j];
            vetor_iti[j] = t;

        }


    }
    for (i=0;i<REAGENTE_LIMITANTE;i++) {
        printf("[%d]\t",vetor_iti[i]);


    }
    
    return 0;
}
