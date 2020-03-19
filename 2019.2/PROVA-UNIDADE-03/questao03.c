
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 3

struct Pessoa {
char Nome[40];
int idade;
float altura; };


void pessoa_mais_velha(struct Pessoa *p){
	int i,maior,indice=0;
	maior = p[0].idade;
	for(i=0;i<LIM;i++){
		if(p[i].idade> maior){
			maior = p[i].idade;
			indice = i;
		}
	
	}
	printf("3- nome da pessoa mais velha %s",p[indice].Nome);
	
	
}
int main() {
	struct Pessoa p[LIM];
	int i,v[LIM];
	for(i=0;i<LIM;i++){
			printf("insira o nome [%d]\n",i);
			fflush(stdin);
			gets(p[i].Nome);
			printf("insira a idade [%d]\n",i);
			scanf("%d",&p[i].idade);
				printf("insira a altura [%d]\n",i);
			scanf("%f",&p[i].altura);
			
	}
	pessoa_mais_velha(p);


    return 0;
}