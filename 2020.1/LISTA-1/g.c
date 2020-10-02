#include <stdio.h>
#include <stdlib.h>



int main() {
    int numeros[4],i,j;
    for(i=0;i<4;i++){
    	printf("insira o [%d] valor:\n",i+1);
    	scanf("%d",&numeros[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			printf("a soma do [%d] com [%d] foi = %d\n",numeros[i],numeros[j],numeros[i]+numeros[j]);
			printf("a multiplicacao do [%d] com [%d] foi = %d\n",numeros[i],numeros[j],numeros[i]*numeros[j]);
			printf("\n");
		}
		
	}
	
    
    
	
	return 0;
}