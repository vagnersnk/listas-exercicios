#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],maior=0,dif,i,indide=0;

    printf("LISTA 1\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }

    maior = vetor_iti[0];
    dif = 0;
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        dif = vetor_iti[i] - vetor_iti[i+1];
       
        if(dif > maior){
            maior= dif;
            indide = i;
        }
    }
    printf("Maior diferença = %d nos indices [%d,%d]\n",maior,indide,indide+1);






    return 0;
}
