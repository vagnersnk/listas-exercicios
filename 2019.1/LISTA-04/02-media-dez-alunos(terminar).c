#include <stdio.h>
#include <stdlib.h>

#define LINHA 4
#define COLUNA 3

int main()
{
   int notas[LINHA][COLUNA],l,c,soma=0,media=0;
   printf("INSIRA %d NOTAS:\n",LINHA*COLUNA);
   for(l=0;l<LINHA;l++){
       for(c=0;c<COLUNA;c++){
           printf(">> [%d][%d]",l,c);
           scanf("%d",&notas[l][c]);
       }
   }


   printf(">> EXIBINDO LISTA DE NOTAS\n");
   for(l=0;l<LINHA;l++){

       for(c=0;c<COLUNA;c++){
           printf("[%d] \t",notas[l][c]);
       }printf("\n");
   }
    printf(">> EXIBINDO MEDIAS ALUNOS\n");

    for(l=0;l<LINHA;l++){
        media = 0;
        soma =0;
        for(c=0;c<COLUNA;c++){
            soma += notas[l][c];
        }
        media = soma/COLUNA;
        printf("> a media do aluno numero [%d] foi [%d]\n",l,media);
    }

    return 0;
}

