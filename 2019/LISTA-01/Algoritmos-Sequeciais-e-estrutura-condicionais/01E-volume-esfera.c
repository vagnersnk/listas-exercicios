#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
    float raio,resultado;
    printf("Insira o raio: ");
    scanf("%f",&raio);
    resultado = (4*3.14*pow(raio,3))/3;
    printf("O volume da esfera foi: %f metros cubicos \n",resultado);
    system("PAUSE");



    return 0;
}