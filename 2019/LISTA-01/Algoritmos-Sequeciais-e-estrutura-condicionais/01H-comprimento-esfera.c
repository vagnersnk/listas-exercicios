#include <stdio.h>
#include <stdlib.h>





int main() {
    float raio,resultado;
    printf("Insira o raio: ");
    scanf("%f",&raio);
    resultado = 2*3.14*raio;
    printf("O comprimento da esfera foi: %0.2f metros \n",resultado);
    system("PAUSE");

    return 0;
}