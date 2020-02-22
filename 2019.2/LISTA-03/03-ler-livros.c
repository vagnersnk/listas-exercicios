#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 3

struct Livro{
	char titulo[30];
	int ano;
	int paginas;
	float preco;
	
};


int main() {
   struct Livro lvr[LIM];
   int i,j,count=0,indicemenor=0,indicemaior=0;
   float maior,menor;
   for(i=0;i<LIM;i++){
   	 printf("Insira o titulo, ano, pagina e preco do livro numero:[%d]\n",i);
   	 fflush(stdin);
   	 gets(lvr[i].titulo);
   		scanf("%d",&lvr[i].ano);
   		scanf("%d",&lvr[i].paginas);
   		scanf("%f",&lvr[i].preco);
   }
 
   maior,menor = lvr[0].preco;
   for(i=0;i<LIM;i++){
      if(lvr[i].preco > maior){
      	maior = lvr[i].preco;
      	indicemaior = i;
	  }
	  if(lvr[i].preco < menor){
	  	menor = lvr[i].preco;
	  	indicemenor = i;
	  }
	  for(j=i+1;j<LIM;j++){
	  	 if(lvr[i].preco == lvr[j].preco){
	  		count++;
	  		 
	 	 }
	 	 
	  }
	 
   }
   printf("quantidade de livros com mesmo preco: %d\n",count);
 
   printf(">LIVRO DE MAIOR VALOR<\nTitulo: %s\nAno: %d\nPaginas: %d\nPreco %f\n----------\n",
   														lvr[indicemaior].titulo,
   														lvr[indicemaior].ano,
														lvr[indicemaior].paginas,
														lvr[indicemaior].preco);
														
    printf(">LIVRO DE MENOR VALOR<\nTitulo: %s\nAno: %d\nPaginas: %d\nPreco %f\n----------\n",
   														lvr[indicemenor].titulo,
   														lvr[indicemenor].ano,
														lvr[indicemenor].paginas,
														lvr[indicemenor].preco);
  
	
    
    return 0;
}