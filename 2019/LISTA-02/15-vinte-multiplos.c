#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,i,resultado=0;

    printf("Isira o numero:");
    scanf("%i",&entrada);

    for(i=1;i<=20;i++) {
        resultado+=entrada;
            printf("result =%i\n",resultado);



    }






    return 0;
}
