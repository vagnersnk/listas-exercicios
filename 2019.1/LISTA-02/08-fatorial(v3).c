#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,i,fat=1;

    printf("Digite Valores [Digite(-1) para sair]");
    while(1){
        scanf("%d",&entrada);
        if (entrada != -1){
            for(i=1;i<=entrada;i++){
               fat = fat *i;
            }
            printf("%i\n",fat);
            fat = 1;
            
        }else{
            printf("Programa encerrado");
            break;
        }


    }
    return 0;
}
