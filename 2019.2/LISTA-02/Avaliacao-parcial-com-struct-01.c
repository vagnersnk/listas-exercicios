#include <iostream>
#include <string.h>
#define LIM 2
#define TAM 20

struct loja{
	char titulo[TAM];
	int vendas;
}; 

int main(){
	struct loja lj[LIM];
	int i,j,indicemenor=0;
	float media=0,soma=0,menor,aux;
	for(i=0;i<LIM;i++){
		printf("insira o produto [%d]:\n",i);
		fflush(stdin);
		gets(lj[i].titulo);
		printf("insira o valor [%d]:\n",i);
		scanf("%d",&lj[i].vendas);
	}
	menor = lj[0].vendas;
	for(i=0;i<LIM;i++){
		//printf("Nome: %s | valor %d \n",lj[i].titulo,lj[i].vendas);
		soma += lj[i].vendas;
		if(lj[i].vendas <menor){
			menor = lj[i].vendas;
			indicemenor = i;
		}
		for(j=i+1;j<LIM;j++){
			if(lj[i].vendas > lj[j].vendas){
				aux = lj[i].vendas;
				lj[i].vendas = lj[j].vendas;
				lj[j].vendas = aux;	
			}	}		}
	media = soma / LIM;
	printf("media = %f\n",media);
	printf("menor vendagen = %s\n",lj[indicemenor].titulo);
	for(i=LIM-1;i>-1;i--){
		puts(lj[i].titulo);
	}
	
	return 0;
}

