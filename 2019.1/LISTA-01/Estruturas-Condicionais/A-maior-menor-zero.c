#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int entrada;
    printf("insira um valor:  ");
    scanf("%d",&entrada);
    if(entrada > 0){
        printf("maior que zero \n");
    }else if (entrada == 0){
        printf("igual a zero \n");
    }else{
        printf("menor que zero \n");
    }


    system("PAUSE");
    return 0;
}
