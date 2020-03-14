#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int par_ou_impar(int numero){
	int i,res=0;
	 for(i=numero;i>0;i-= 1){
	 
	    res = numero-2;
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