#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>



struct Pessoa{
	float peso;
	float altura;
	float imc;
	
};


int main() {
	struct Pessoa ps;
	float calc=0;

	printf("insira o peso e altura\n");
	scanf("%f",&ps.peso);
	scanf("%f",&ps.altura);
	calc = ps.peso/pow(ps.altura,2);
	ps.imc = calc;
	printf(">>Exibindo a pessoa<<\nPeso: %f\nAltura: %f\nImc:%f",ps.peso,ps.altura,ps.imc);
	

		
   
	
    
    return 0;
}