#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIM 4

//EXIBIR INTENS DA LISTA
//printf("(INDICE)-VALOR\n=-=-=-=-=-=-=\n");
//for(i=0;i<LIM;i++)
//  printf("(%d) - [%d]\n",i,lista[i]);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lista[LIM],i,j,t,maior,imaior;

    //LER DADOS
    printf("Insira %d valores:\n",LIM);
    for(i=0;i<LIM;i++)
      scanf("%d",&lista[i]);

    //-=-=-=-=-=RELATORIO-=-=-=-=-=-=
    // ENTRADA PREVISTA [3,2,4,6]
    // RESULTADO ESPERADO DA ENTRADA [6,4,3,2]
    // RESULTADO ESPERADO DA LISTA DE INDICE [3,2,0,1]

    //ACHAR PRIMEIRO INDICE
    for(j=0;j<LIM-1;j++){
      maior=lista[j];
      imaior = j;
      for(i=j+1;i<LIM;i++){      
         if(lista[i]>maior){
           maior = lista[i];
           imaior = i;
          }
      t = lista[j];
      lista[j] = maior;
      lista[imaior] = t;
      }

    }

    //EXIBIR INTENS DA LISTA
    printf("EXIBINDO LISTA DE INDICE\n");
    for(i=0;i<LIM;i++)
      printf("(%d) - [%d]\n",i,lista[i]);





    return 0;
}
