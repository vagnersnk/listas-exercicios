#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define LIM 30

struct Pessoa{
   char nome[30];
   float altura;
   int idade;
	
};


int main() {
	struct Pessoa ps[LIM];
	float media=0,mediah=0,somah=0,soma=0;
	int i,novo,velho,inovo=0,ivelho=0,count=0;
	for(i=0;i<LIM;i++){
		printf("Insira o nome, altura e idade da pessoa [%d]:\n",i);
		fflush(stdin);
		gets(ps[i].nome);
		scanf("%f",&ps[i].altura);
		scanf("%d",&ps[i].idade);
	}
	novo,velho = ps[0].idade;
	for(i=0;i<LIM;i++){
		soma += ps[i].idade;
		if(ps[i].altura<1.5){
			somah = ps[i].idade;
			count++;
		}
		if(ps[i].idade > velho){
			velho = ps[i].idade;
			ivelho = i;
		}
		if(ps[i].idade < novo){
			novo = ps[i].idade;
			inovo = i;
		}
		
	}
	media = soma / LIM;
	mediah = somah / count;
	puts("pessoa mais nova\n");
	puts(ps[inovo].nome);
	puts("pessoa mais velha\n");
	puts(ps[ivelho].nome);
	
	for(i=0;i<LIM;i++){
		if(ps[i].idade >media){
			printf("\n>>Media da idade de pessoas menores que 1.5m == %f\n>>Acima da media de idade<<\nMedia: %f\nNome: %s\n----\n",mediah,media,ps[i].nome);
		}
	}

	
    
    return 0;
}