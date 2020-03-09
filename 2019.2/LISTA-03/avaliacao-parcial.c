#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 10
#define TAM 30

struct Produto {
	char titulo[30];
	float vendas;
};


int main() {
	
	int i,j,l;
	float k;
	char aux[TAM],busca[TAM];
	struct Produto p[LIM] = {
		{"Farinha",34},
		{"Biscoito",23},
		{"Acucar",57},
		{"Feijao",43},
		{"Cafe",42},
		{"Batata",67},
		{"Desifetante",21},
		{"Amaciante",45},
		{"Sabao",44},
		{"Leite",33}
	};
	
	// Questao A
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(p[i].vendas>p[j].vendas){
			
					k = p[i].vendas;
					p[i].vendas = p[j].vendas;
					p[j].vendas = k;
					
					strcpy(aux,p[i].titulo);
					strcpy(p[i].titulo,p[j].titulo);
					strcpy(p[j].titulo,aux);
						}	
			
		}
	}
	printf(">> Questao (a) ordenar<<\n");
	for(i=0;i<LIM;i++){
		puts(p[i].titulo);
	}
	// Questao B
	printf(">> Questao (b) titulo maior vendagem<<\n");
	puts(p[LIM-1].titulo);
	// Questao C
	printf(">> Questao (c) top 5  menor vendagem<<\n");
	for(i=0;i<5;i++){
		puts(p[i].titulo);
	}
	
	// Questao 2
	
	strcpy(busca,"teste");
	while(strcmp(busca,"OUT")!=0){
		puts("Digite o nome do produto. Para sair digite: OUT");
		gets(busca);
		l=0;
		for(i=0;i<LIM;i++){
			if(strcmp(p[i].titulo,busca)==0){
				printf(">> produto encontrado\nNome: %s\nVendas:%f\n",p[i].titulo,p[i].vendas);
				l=1;
				break;
			
			}	
		}
		if(l==0){
			puts("nao encontrado");
		}
	
		
	}
	

	

  
    
    return 0;
}
