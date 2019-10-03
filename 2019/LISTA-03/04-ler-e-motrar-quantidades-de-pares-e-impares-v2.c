#include <stdio.h>
#include <stdlib.h>

#define REAGENTE_LIMITANTE 3

int main()
{
   int lista[REAGENTE_LIMITANTE],i,pares=0;
   printf("INSIRA %d VALORES\n",REAGENTE_LIMITANTE);
   for(i=0;i<REAGENTE_LIMITANTE;i++){
       printf(">> [%d] :",i);
       scanf("%d",&lista[i]);
   }
   for(i=0;i<REAGENTE_LIMITANTE;i++){
       if(lista[i] % 2 == 0){
           pares++;
       }
   }
   printf("LISTANDO QUANTIDADES DE PARES E IMPARES\n");
   printf(":pares: = %d\n:impares: = %d",pares,REAGENTE_LIMITANTE-pares);

    return 0;
}
