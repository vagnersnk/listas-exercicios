#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
	float valor;
	int codigo;
	printf("insira o preco\n");
	scanf("%f",&valor);
	printf("insira o codigo\n");
	scanf("%d",&codigo);
	if(codigo == 1){
		printf("a vista em dinheiro ou cheque, com 10%% de desconto = %f\n",valor * 0.9);
	}
	else if(codigo == 2){
			printf("a vista com cartão de credito, com 5%% de desconto = %f\n",valor * 0.95);
	}
	else if(codigo == 3){
			printf("Em 2 vezes, preço normal de etiqueta sem juros %f\n", valor / 2);
	}
	else if(codigo == 4){
			printf("Em 3 vezes, preço de etiqueta com acréscimo de 10%% %f\n",(valor* 1.1)/3);
	}
	
    

	return 0;
}