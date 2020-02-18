/*1- leia o título de  10 produtos de uma loja e a quantidade
*    vendidas por cada um deles em um determinado mês. Em seguida informe:
*         a) A média geral das vendas naqueles mês.
*         b) O título do produto com menor vendagem.
*         c) O título dos 5 produtos mais vendidos.
*
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 2
#define TAM 20


int main() {
    char produtos[LIM][TAM],aux[TAM];
    float vendas[LIM],menor,k;
    int i,j,soma=0,media=0,indicemenor=0;
    
	for(i=0;i<LIM;i++){
		printf("<insira o nome do produto: [ %d ]>\n",i);
		fflush(stdin);
		gets(produtos[i]);
		printf("<insira o valor do produto: [ %d ]>\n",i);
		scanf("%f",&vendas[i]);
		
	}
	// questão >a<
	for(i=0;i<LIM;i++){
		soma += vendas[i];
	}
	media = (float)soma / LIM;
	printf("a)media geral = %d\n",media);
	// questão >b<
	menor = vendas[0];
	for(i=0;i<LIM;i++){
		if(vendas[i]<menor){
			menor = vendas[i];
			indicemenor = i;
		}
	}
	printf("b) titulo menor vendagem >valor = %f\n",menor);
	puts(produtos[indicemenor]);
	// questao >c<
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(vendas[i]>vendas[j]){
				k = vendas[i];
				vendas[i]= vendas[j];
				vendas[j]= k;
				
				strcpy(aux,produtos[i]);
				strcpy(produtos[i],produtos[j]);
				strcpy(produtos[j],aux);
			}
		}
		
	}
	printf("c) Top %d mais vendidos\n",LIM);
	for(i=LIM-1;i>-1;i--){
		puts(produtos[i]);
		
	}
	
	
	
	

    
    return 0;
}