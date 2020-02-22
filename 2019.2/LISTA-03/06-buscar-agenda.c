#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 2

struct Pessoa{
   char nome[30];
   char endereco[30];
   char telefone[10];
	
};


int main() {
	struct Pessoa ps[LIM];
	char pesquisa[30];
	int i,k;
	for(i=0;i<LIM;i++){
		printf("Insira o nome, endereco e telefone da pessoa [%d]:\n",i);
		fflush(stdin);
		gets(ps[i].nome);
		gets(ps[i].endereco);
		gets(ps[i].telefone);
		
	}
	while(1){
		puts(">>DESEJA FAZER UMA PESQUISA?<<\n1-PARA SIM\n2-PARA NAO\n");
		scanf("%d",&k);
		switch(k){
			case 1:
				puts("Digite o nome do usuario");
				fflush(stdin);
				gets(pesquisa);
				for(i=0;i<LIM;i++){
					if(strcmp(ps[i].nome,pesquisa)==0){
						printf(">>USUARIO ENCONTRADO<<\nNome: %s\nEndereco: %s\nTelefone: %s\n----------\n\n",ps[i].nome,
																							  ps[i].endereco,
																							  ps[i].telefone);
					}
				}
				break;
			case 2:
				puts("encerrando programa");
			  	exit(1);
		    default :
		    	puts("Alternativa incorreta Encerrando o programa");
				exit(1);	
		}
	}


		
   
	
    
    return 0;
}