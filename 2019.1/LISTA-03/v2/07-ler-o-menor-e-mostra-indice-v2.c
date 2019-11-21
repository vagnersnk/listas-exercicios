#include <stdio.h>
#include <stdlib.h>

#define REAGENTE_LIMITANTE 3

int main()
{
  int lista[REAGENTE_LIMITANTE],i,indice=0,menor;
  printf("INSIRA %d VALORES\n",REAGENTE_LIMITANTE);
  for(i=0;i<REAGENTE_LIMITANTE;i++){
      printf(">> [%d]",i);
      scanf("%d",&lista[i]);
  }
  menor = lista[0];
  for(i=0;i<REAGENTE_LIMITANTE;i++){
      if(lista[i] < menor){
          menor = lista[i];
          indice = i;
      }
  }
  printf("o menor valor [%d] se encontra no indice [%d]",menor,indice);


    return 0;
}
