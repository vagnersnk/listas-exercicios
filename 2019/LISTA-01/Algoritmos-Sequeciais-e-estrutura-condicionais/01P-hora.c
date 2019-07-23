#include <stdio.h>
#include <stdlib.h>




int main() {

    int hora,minutos,resultado;
    printf("insira a hora: ");
    scanf("%d",&hora);
    printf("insira os minutos: ");
    scanf("%d",&minutos);
    resultado = (hora*60)+minutos;
    printf("total de munitos %d",resultado);

    return 0;
}