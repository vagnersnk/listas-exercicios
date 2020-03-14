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


void busca_produto(struct Produto *in,char *busca){
    int i,k;
    for(i=0;i<LIM;i++){
    	k =0;
    	if(strcmp(in[i].titulo,busca)==0){
    		printf(">>produto encontrado\nTitulo : %s\nQuantidade Vendida: %d\nPreco: %f",in[i].titulo,in[i].quantidade_vendida,in[i].preco);
    		k=1;
		}
	}
	if(k == 0){
		puts("produto nao encontrado");
	}
	
}

void maior_que_p(struct Produto *in,float preco){
	int i;
	printf(">>imprimindo valores maiores que %f\n",preco);
	for(i=0;i<LIM;i++){
		if(in[i].preco> preco){
			puts(in[i].titulo);
		}
	}
}

int media_quant_vendas(struct Produto *in){
	int i,soma=0,media=0;
	for(i = 0 ;i<LIM;i++){
		soma += in[i].quantidade_vendida;
		
	}
	media = soma / LIM;
	return (media);
	
}

int main() {

	struct Produto p[LIM] = {
		{"Farinha",34,4.9},
		{"Biscoito",23,3.10},
		{"Acucar",57,4.20},
		{"Feijao",43,10.5},
		{"Cafe",42,10.4}
	
	};
	char busca[40];
	float valor;
	int media;
	puts("Insira o titulo do produto");
	gets(busca);
	busca_produto(p,busca);
	puts("Insira o preco");
	scanf("%f",&valor);
	maior_que_p(p,valor);
	media = media_quant_vendas(p);
	printf("medias de vendas : %d",media);

	

    return 0;
}