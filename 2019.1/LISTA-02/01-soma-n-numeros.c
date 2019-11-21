#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,limite,soma=0,i;
    float media;
    int lista[5];
    printf("[MULTIPLOS] Digite o numero para iniciar: ");
    scanf("%d",&entrada);
    printf("Digite a quantidade de multiplos: ");
    scanf("%d",&limite);
    for(i=1;i<=limite;i++){
        lista[i] = (entrada*i);
        soma = soma + (entrada*i);

        //printf("%d x %d = %d\n",entrada,i,entrada*i);
        printf("[%d]",lista[i]);
    }

    //printf("Media da soma %d é %d\n",soma,soma/limite);








	return 0;
}