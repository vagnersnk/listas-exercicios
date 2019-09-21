#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_iti[REAGENTE_LIMITANTE],i,j,rep=0;

    printf("LISTA 1\n");
    for (i = 0; i < REAGENTE_LIMITANTE; i++){
        printf("[%d] = ",i);
        scanf("%d",&vetor_iti[i]);

    }


    for (i = 0; i < REAGENTE_LIMITANTE; i++) {
        if(vetor_iti[i] == vetor_iti[i+1]){
            rep += 1;
        }
    }
    printf("Elemntos nao repetidos =%d",(REAGENTE_LIMITANTE-1) - rep);




    return 0;
}
