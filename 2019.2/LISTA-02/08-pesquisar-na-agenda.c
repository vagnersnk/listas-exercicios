#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 2

int main() {
    char nomes[LIM][20];
    char telefones[LIM][8];
    char enderecos[LIM][30];
	char entrada[20];
	int i,j;
	for(i=0;i<LIM;i++){
		printf("insira o %d nome>\n",i);
		fflush(stdin);
		gets(nomes[i]);
		printf("insira o %d telefone>\n",i);
		fflush(stdin);
		gets(telefones[i]);
		printf("insira o  %d endereco>\n",i);
		fflush(stdin);
		gets(enderecos[i]);
	}

    while(1){
	puts("<insira o nome para pesquisar>\n<Para sair da pesquisa digite out\n");
	gets(entrada);		
	for(i=0;i<LIM;i++){
		if(strcmp(nomes[i],entrada)==0){
				printf(">>nome encontrado no banco de dados\nNome: %s\nTelefone: %s\nEndereco: %s\n",nomes[i],telefones[i],enderecos[i]);
				
		}
		if(strcmp(entrada,"out")==0){
			puts("Programa encerrado");
			exit(1);
		}
	}
};

		

	
    
    
    return 0;
}