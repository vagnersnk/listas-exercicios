#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 50

int maiorVet(int in[]){
	int r,i;
	r = in[0];
	for(i =0; i<LIM;i++){
		if(in[i]> r){
			r = in[i];
		}
	}

	return (r);	
	
	
	
}


int main() {

	int i,vetor[LIM],f;
	for(i=0;i<LIM;i++){
		printf("insira o valor [%d]",i);
		scanf("%d",&vetor[i]);	
	} 
	
	f = maiorVet(vetor);
	printf("Maior valor : %d",f);
	

  
    
    return 0;
}