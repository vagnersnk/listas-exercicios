#include <stdio.h>
#include <stdlib.h>

#define REAGENTE_LIMITANTE 3

int main()
{
   int lista[REAGENTE_LIMITANTE],i,j,t,maior,indice;
   printf("DIGITE %d VALORES\n",REAGENTE_LIMITANTE);
   for(i=0;i<REAGENTE_LIMITANTE;i++){
       printf(">> [%d]",i);
       scanf("%d",&lista[i]);
   }
   for(i=0;i<REAGENTE_LIMITANTE;i++){
       maior = lista[i];
       indice=i;
       for(j=i+1;j<REAGENTE_LIMITANTE;j++){
           if(lista[i] > maior){
               maior = lista[i];
               indice = i;
           }
       }
       t = lista[i];
       lista[j] = maior;
       lista[indice] = t;


   }


   for(i=0;i<REAGENTE_LIMITANTE;i++)
       printf("[%d]",lista[i]);




    return 0;
}
