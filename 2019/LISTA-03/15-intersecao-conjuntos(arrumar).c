#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],vetor_ni[REAGENTE_LIMITANTE],count=0,vetor_san[REAGENTE_LIMITANTE],i,j,valor;
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
    valor = 0;
    for (i = 0; i < REAGENTE_LIMITANTE; i++) {
        for (j=0;j<REAGENTE_LIMITANTE;j++){
            if(vetor_iti[i] == vetor_ni[j]){
                count +=1;
                valor = vetor_iti[i];
                vetor_san[i] = valor;


            }
        }


    }
    printf("EXIBINDO VETOR 3\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d]",vetor_san[i]);

    }





    return 0;
}
