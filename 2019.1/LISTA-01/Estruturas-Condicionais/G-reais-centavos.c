#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int reais;
    float centavos,resultado=0;
    printf("Digite dois valores reais e centavos");
    scanf("%i",&reais);
    scanf("%f",&centavos);
    if (centavos>=100){
        printf("%i,%.0f",reais,centavos/10);
    }else{
        printf("%i,%.0f",reais,centavos);
    }


    return 0;
}
