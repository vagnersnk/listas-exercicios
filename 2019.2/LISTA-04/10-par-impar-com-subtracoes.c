#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int par_ou_impar(int numero){
	int i,res=numero;
	 for(i=res;res>1;res-=2){
	    ;
	  }
	return res;
	
}

int main() {
	int entrada,saida;
	puts("insira um numero");
	scanf("%d",&entrada);
	saida = par_ou_impar(entrada);
	printf("o numero [%d] deu resultado : %d",entrada,saida);


	



	

    return 0;
}