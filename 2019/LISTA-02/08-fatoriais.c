#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,n,i;

    printf("Digite Valores [Digite(-1) para sair]");
    while(1){
        scanf("%d",&entrada);
        if (entrada != -1){
            for(i =1;entrada>1;entrada--){
                i = i* entrada;
            }
            printf("Fatorial = %d\n",i);
        }else{
            printf("Programa encerrado");
            break;
        }


    }
    return 0;
}