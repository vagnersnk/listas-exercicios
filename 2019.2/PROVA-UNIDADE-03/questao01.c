/*1. Implemente uma função que receba como entrada um vetor de 50 números inteiros e
retorne a quantidade de números cujo valor é acima de 100.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 3

int maiorcem(int v[]){
	int i,count=0;
	for(i=0;i<LIM;i++){
		if(v[i] > 100){
			count ++;
		}
	}
	return (count);

	
}
int main() {
	int i,v[LIM],res;
	for(i=0;i<LIM;i++){
			printf("insira o valor [%d]\n",i);
			scanf("%d",&v[i]);
	}
	res = maiorcem(v);
	printf("quantidade de valores acima de 100 : %d",res);


    return 0;
}