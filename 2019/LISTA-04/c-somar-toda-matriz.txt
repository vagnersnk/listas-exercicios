#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LIML 3
#define LIMC 3
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[LIML][LIMC],l,c,soma=0;


    for (l = 0; l < LIML; l++){
        for(c=0;c<LIMC;c++){
            printf("Digite o valor do [%d][%d]",l,c);
            scanf("%d",&vetor[l][c]);
        }


    }

    for (l = 0; l < LIML; l++){
       for(c=0;c<LIMC;c++){
           soma += vetor[l][c];
       }


    }
    printf("Resultado da soma= %d\n",soma);





    return 0;
}
