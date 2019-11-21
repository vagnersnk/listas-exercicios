#include <stdio.h>
#include <stdlib.h>
#include <math.h>





int main() {
    int a,b,c,delta,resultado,raiz1,raiz2,d;
    printf("Insira o valor de a: ");
    scanf("%d",&a);
    printf("Insira o valor de b: ");
    scanf("%d",&b);
    printf("Insira o valor de c: ");
    scanf("%d",&c);
    delta = (pow(b,2)-4*a*c);
    raiz1 = (-(b)+sqrt(delta))/2*a;
    raiz2 = (-(b)-sqrt(delta))/2*a;
    printf("o resultado foi S = (x Є R / x = %d e x = %d}  \n",raiz2,raiz1);
    system("PAUSE");
    return 0;
}
