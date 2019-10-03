#include <stdio.h>
#include <stdlib.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    int lista[REAGENTE_LIMITANTE],i,maior,ultimo=REAGENTE_LIMITANTE-1,indice=0;
    printf("DIGITE %d VALORES\n",REAGENTE_LIMITANTE);
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf(">> [%d]",i);
        scanf("%d",&lista[i]);
    }
    maior = lista[0];
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        if(lista[i]> maior){
            maior = lista[i];
            indice = i;
        }

    }

    printf("maior elemento [%d] estava no indice [%d]\n",maior,indice);
    lista[ultimo] = maior;
    lista[indice] = lista[ultimo];



    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf("[%d]",lista[i]);
    }




    return 0;
}
