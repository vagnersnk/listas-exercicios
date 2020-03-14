#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define LIM 2
#define RES 2

struct Apostadores{
	char nome[40];
	int palpite;
	int ok;
};

void acertos(struct Apostadores *in,int *res){
	int i,j,acertos;
	for(i =0;i<LIM;i++){
		acertos=0;
		for(j=0;j<LIM;j++){
			if(in[i].palpite == res[j]){
				acertos++;
				
			}
		}
    in[i].ok = acertos;		
	printf("O apostador: %s teve: %d acertos\n",in[i].nome,acertos);		
		
	}
}

void ordenar_apostadores(struct Apostadores *in){
	int i,j,k,l;
	char aux[40];
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(in[i].ok>in[j].ok){
				strcpy(aux,in[i].nome);
				strcpy(in[i].nome,in[j].nome);
				strcpy(in[j].nome,aux);
				
				k = in[i].ok;
				in[i].ok = in[j].ok;
				in[j].ok = k;
				
				l = in[i].palpite;
				in[i].palpite = in[j].palpite;
				in[j].palpite = l;
			}
		}
	}
}

void media_acertos(struct Apostadores *in ){
	float media=0,soma=0;
	int i;
	for(i=0;i<LIM;i++){
		soma += in[i].ok;
		
	}
	
	media = soma / LIM;
	printf(">>A media de acertos foi: %f\n",media);
	
}

int main() {
	int resultados[RES],i;
	struct Apostadores p[LIM];
	float media_result;
	
	for(i=0;i<RES;i++){
		printf("insira o resultado [%d] da loto:\n",i);
		scanf("%d",&resultados[i]);
	}
	for(i=0;i<LIM;i++){
		printf("insira o nome e palpite do apostador [%d]:\n",i);
		fflush(stdin);
		gets(p[i].nome);
		scanf("%d",&p[i].palpite);
	}
	acertos(p,resultados);
	ordenar_apostadores(p);
	puts(">>Rank de acertos");
	for(i=LIM-1;i>-1;i--){
		printf("nome : %s || acertos : %d\n",p[i].nome,p[i].ok);
	}
	media_acertos(p);


	



	

    return 0;
}