#include <stdio.h>
#include <stdlib.h>





int main() {
    float base,altura,resultado;
    printf("Insira a base do triangulo: ");
    scanf("%f",&base);
    printf("Insira a altura do triangulo: ");
    scanf("%f",&altura);
    resultado = (base*altura)/2;
    printf("O resultado foi: %0.2f \n",resultado);

    system("PAUSE");
    return 0;
}