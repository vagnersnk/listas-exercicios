#include <stdio.h>
#include <math.h>


int main() {
	float base,numero,logaritmo=0;
	printf("digite a base:\n");
	scanf("%f",&base);
	printf("digite o numero:\n");
	scanf("%f",&numero);
	logaritmo = log(numero)/log(base);
	printf("resultado = %f",logaritmo);
	
	
	return 0;
	
   
}