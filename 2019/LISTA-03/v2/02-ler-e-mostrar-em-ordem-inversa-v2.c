#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define REAGENTE_LIMITANTE 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lista[REAGENTE_LIMITANTE],i;
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf("Digite o %d  valor:",i+1);
        scanf("%d",&lista[i]);
    }
    printf("Exibindo ordem inversa\n");
    for(i=0;i<REAGENTE_LIMITANTE;i++){
        printf("%d = [%d]\n",REAGENTE_LIMITANTE-i,lista[REAGENTE_LIMITANTE-i-1]);

    }


    return 0;
}