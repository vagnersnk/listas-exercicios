#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero,expo,resultado=1,i;

    printf("Isira o numero:");
    scanf("%i",&numero);
    printf("Isira o expoente:");
    scanf("%i",&expo);
    for(i=0;i<expo;i++) {
        resultado *=numero;
       // printf("[%i] result =%i\n",i,resultado);

    }
    printf("Resultado =%i",resultado);





    return 0;
}
