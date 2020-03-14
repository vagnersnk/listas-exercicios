#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 10

int eqvalue(int in[],int n){
	int r,i;
	r = 0;
	for(i =0; i<LIM;i++){
		if(in[i] == n){
			r ++;
		}
	}

	return (r);	
	
	
	
}


int main() {

	int i,vetor[LIM],k,f;
	for(i=0;i<LIM;i++){
		printf("insira o valor [%d]",i);
		scanf("%d",&vetor[i]);	
	} 
	printf("insira o valor para buscar");
	scanf("%d",&k);
	
	
	f = eqvalue(vetor,k);
	printf("Quantidade de vezes que [%d] aparece no vetor: %d",k,f);
	

  
    
    return 0;
}