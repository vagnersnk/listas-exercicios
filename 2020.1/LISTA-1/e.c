#include <stdio.h>
#include <stdlib.h>



int main() {
    float valor,taxa,tempo,prest;
    printf("insira o valor, taxa e tempo:\n");
    scanf("%f%f%f",&valor,&taxa,&tempo);
    prest = valor +(valor*(taxa/100)*tempo);
    printf("valor da prestacao: %f",prest);
	
	return 0;
}