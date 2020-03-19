/* 2. Implemente uma função que receba como entrada um vetor de 50 números inteiros e
retorne a média aritmética dos números cujo valor é acima de 100.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 5

int maiorcem(int v[]){
	int i,soma=0,media=0,count=0;
	for(i=0;i<LIM;i++){
		if(v[i] > 100){
			soma += v[i];
			count++;
		}
		
	}
	media = soma /count;
	return (media);
	
}
int main() {
	int i,v[LIM],res;
	for(i=0;i<LIM;i++){
			printf("insira o valor [%d]\n",i);
			scanf("%d",&v[i]);
	}
	res = maiorcem(v);
	printf("media de valores acima de 100 : %d",res);


    return 0;
}