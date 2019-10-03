#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lista[REAGENTE_LIMITANTE],i;
    printf("INSIRA %d VALORES:\n",REAGENTE_LIMITANTE);
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf(">> [%d] :",i);
        scanf("%d",&lista[i]);
    }
    printf("EXIBINDO LISTA\n");
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf("-%d- [%d]\n",i,lista[i]);
    }
    printf("EXIBINDO PARES\n");
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        if(lista[i] % 2 == 0)
        printf("-%d- [%d]",i,lista[i]);
    }


    return 0;
}
