#include <stdio.h>
#include <stdlib.h>

#define REAGENTE_LIMITANTE 5

int main()
{
    int notas[REAGENTE_LIMITANTE],i,soma=0,media=0;
    printf("INSIRA %d NOTAS\n",REAGENTE_LIMITANTE);
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf(">> [%d]",i);
        scanf("%d",&notas[i]);
    }
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        soma += notas[i];
    }
    media = soma / REAGENTE_LIMITANTE;
    printf(">> MEDIA DA TURMA {%d}\n>>LISTA DE NOTAS ACIMA DA MEDIA\n",media);
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        if(notas[i] > media){
            printf("[%d]",notas[i]);
        }
    }



    return 0;
}

