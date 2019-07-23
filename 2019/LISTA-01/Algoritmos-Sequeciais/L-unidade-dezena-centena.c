#include <stdio.h>
#include <stdlib.h>





int main() {
    int numero,unidades,centena,dezena;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d",&numero);
    unidades = numero / 1 % 10;
    dezena = numero / 10 % 10;
    centena = numero /100 % 10;
    printf("unidade %d \n dezena %d \n centena %d \n",unidades,dezena,centena);

    system("PAUSE");
    return 0;
}