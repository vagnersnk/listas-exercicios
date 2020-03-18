#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 5


struct Produto {
	char titulo[40];
	int quantidade_vendida;
	float preco;
};


void titulo_mais_caro(struct Produto *in){
	int i,indice=0;
	float maior;
	maior = in[0].preco;
	for(i =0; i<LIM;i++){
		if(in[i].preco > maior){
			
			maior = in[i].preco;
			indice = i;
		
		}
	}
	puts(">>produto mais caro");
	puts(in[indice].titulo);	
	
}

void venda_mais_barato(struct Produto *in){
	int i,indice=0;
	float menor;
	menor = in[0].preco;
	for(i =0; i<LIM;i++){
		if(in[i].preco < menor){
			
			menor = in[i].preco;
			indice = i;
		
		}
	}
	printf(">> quantidade de vendas do mais barato : %d\n",in[indice].quantidade_vendida);	
	
}

void mais_vendidos_top10(struct Produto *in){
	int i,j,k;
	float l;
	struct Produto aux;
	for(i =0; i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(in[i].quantidade_vendida>in[j].quantidade_vendida){
				aux = in[i];
				in[i]= in[j];
				in[j] = aux;
			}
		}
	
	}
	
	
	
}



int main() {
	int i,b;
	struct Produto p[LIM] = {
		{"Farinha",34,4.9},
		{"Biscoito",23,3.10},
		{"Acucar",57,4.20},
		{"Feijao",43,10.5},
		{"Cafe",42,10.4}
	
	};
	
	titulo_mais_caro(p);
	venda_mais_barato(p);
	mais_vendidos_top10(p);
	
	puts(">>lista mais vendidos");
	for(i=LIM-1;i>-1;i--){
		printf("%s || %d || %f \n",p[i].titulo,p[i].quantidade_vendida,p[i].preco);
	}
	
	

    return 0;
}