#include <stdio.h>
#include <stdlib.h>



int main() {
    int nota1,nota2,nota3,nota4,resultado;
    printf("Insira a primeira nota: ");
    scanf("%d",&nota1);
    printf("Insira a segunda nota: ");
    scanf("%d",&nota2);
    printf("Insira a terceira nota: ");
    scanf("%d",&nota3);
    printf("Insira a quarta nota: ");
    scanf("%d",&nota4);
    resultado = (nota1+nota2+nota3+nota4)/ 4;
    printf("Sua media foi: %d \n",resultado);
    system("PAUSE");


    return 0;
}