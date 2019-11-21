#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome1[10];
    char nome2[10];

    while(1){
        printf("Digite o nome");
        scanf("%s",&nome1);
        printf("Digite o segundo nome");
        scanf("%s",&nome2);

        if(nome1 == nome2){
            printf("Encerrado");
            break;
        }
    }













    return 0;
}

