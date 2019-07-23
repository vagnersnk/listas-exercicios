#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main() {
    float x1,x2,y1,y2,resultado;
    printf("Insira a ponto x1 : ");
    scanf("%f",&x1);
    printf("Insira a ponto y1 : ");
    scanf("%f",&y1);
    printf("Insira a ponto x2 : ");
    scanf("%f",&x2);
    printf("Insira a ponto y2 : ");
    scanf("%f",&y2);
    resultado = sqrt((pow(x1-x2,2))+(pow(y1-y2,2)));
    printf("A distancia entre os ponto foi : %0.1f \n",resultado);
    system("PAUSE");



    return 0;
}