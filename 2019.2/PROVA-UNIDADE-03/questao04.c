
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


void ordenar(struct Pessoa *p){
	int i,j;
	struct Pessoa aux;
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(p[i].altura > p[j].altura){
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
			
		}
	}
	
	
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
	ordenar(p);
	printf("Ordem do mais baixo para mais alta\n");
	for(i=0;i<LIM;i++){
		puts(p[i].Nome);
	}


    return 0;
}