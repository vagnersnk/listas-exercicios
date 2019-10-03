#include <stdio.h>
#include <stdlib.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    int lista[REAGENTE_LIMITANTE],i,maior,indice=0;
    printf("INSIRA %d VALORES\n",REAGENTE_LIMITANTE);
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf(">> [%d]",i);
        scanf("%d",&lista[i]);
    }
    maior = lista[0];
    for(i=1;i<REAGENTE_LIMITANTE;i++){
        if(lista[i] > maior){
            maior = lista[i];
            indice = i;
        }
    }
    printf("o maior valor %d se encontra no indice %d",maior,indice);


    return 0;
}
