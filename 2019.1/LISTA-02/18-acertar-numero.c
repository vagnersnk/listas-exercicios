#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
   int numero,acerto;
    printf("Digite um numero:");
    scanf("%i",&numero);

    while(1) {
        printf("Digite outro numero:");
        scanf("%i", &acerto);


        if (numero == acerto) {
            printf("Acertou mizeravi");
            break;
        }
    }
    return 0;
}

