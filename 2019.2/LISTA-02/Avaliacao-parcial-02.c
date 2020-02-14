/*2- leia o título de  10 produtos de uma loja e a quantidade
*    vendias por 12 mêses. Em seguida informe:
*         a) Relação dos títulos dos produtos, ordenados alfabeticamente, com total de vendas do ano.
*         b) Busca por título do produto, apresentando a respectiva quantidade vendida nos 12 meses e o total geral.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 2
#define TAM 20
#define MES 2


int main() {
    char produtos[LIM][TAM],aux[TAM],busca[TAM];
    float vendas[LIM][MES],totalmes[LIM],k;
    int i,j,soma=0,somatotal=0;
    
	for(i=0;i<LIM;i++){
		printf("<insira o nome do produto: [ %d ]>\n",i);
		fflush(stdin);
		gets(produtos[i]);
		for(j=0;j<MES;j++){
			printf("<insira o valor do produto: [ %d ][ %d ]>\n",i,j);
			scanf("%f",&vendas[i][j]);
		}
		
		
	}

	for(i=0;i<LIM;i++){
		for(j=0;j<LIM;j++){
			soma += vendas[i][j];
			somatotal += vendas[i][j];		
		}
		totalmes[i]= soma;
		soma =0;
		
	}
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(strcmp(produtos[i],produtos[j])>0){
				strcpy(aux,produtos[i]);
				strcpy(produtos[i],produtos[j]);
				strcpy(produtos[j],aux);
				
				k = totalmes[i];
				totalmes[i] = totalmes[j];
				totalmes[j] = k; 
			}
		}
	}
	printf("a) relacao produtos com vendas do mes\n");
	for(i=0;i<LIM;i++){
		puts(produtos[i]);
		printf("%f\n",totalmes[i]);
		
	}
	// questao >b<
	printf("insira valor para buscar\n");
	fflush(stdin);
	gets(busca);
	for(i=0;i<LIM;i++){
		if(strcmp(busca,produtos[i])==0){
			printf(">>produto encontrado venda total = %d\n nome=",somatotal);
			puts(produtos[i]);
			puts(">>listado historico de vendas");
			for(j=0;j<MES;j++){
				printf("%f\n",vendas[i][j]);	
			}
			
			
		}
		
	}
	
	
	
	
	

    
    return 0;
}