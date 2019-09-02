#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int cont = 0, i, j;
    int soma = 0;

    for (i=1 ; i <= 100; i++) {

        for (j=1; j <= i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            printf("%d\n", i);
            soma= soma+i;
        }
        cont = 0;
    } printf("Soma dos 100 primeiros numero primos = %d\n", soma);
    return 0;
}