#include <stdio.h>
#include <stdlib.h>




int main() {
   int comprimento,largura,resultado;
   printf("insira o comprimento: ");
   scanf("%d",&comprimento);
   printf("insira o largura: ");
   scanf("%d",&largura);
   resultado = (comprimento *largura)*18;
   printf("na area inseria sera utilizado %d de potencia\n",resultado);
   system("PAUSE");
    return 0;
}
