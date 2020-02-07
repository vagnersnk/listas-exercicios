#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 30

int main() {
    char nomes[LIM][20];
    float alturas[LIM];
    int idades[LIM],i,somaidade=0,novo,velho,indicenovo=0,indicevelho=0;
    int somainferior=0,mediainferior=0,countinferior=0,mediaidade=0;
	for(i=0;i<LIM;i++){
		printf("insira o %d nome>\n",i);
		fflush(stdin);
		gets(nomes[i]);
		printf("insira a %d altura>\n",i);
		scanf("%f",&alturas[i]);
		printf("insira a  %d idade>\n",i);
		scanf("%d",&idades[i]);	
	}
	novo = idades[0];
	velho= idades[0];
	for(i=0;i<LIM;i++){
		somaidade += idades[i];
		
		if(idades[i]>novo){
			velho = idades[i];
			indicevelho = i;
		
		}
		if(idades[i]<velho){
			novo = idades[i];
			indicenovo= i;
		}
	
		
	}
	
	mediaidade = (float)somaidade/LIM;
	
	for(i=0;i<LIM;i++){
		if(alturas[i]<1.5){
			somainferior += idades[i];
			countinferior ++;	
		}
		
	}	

	mediainferior = somainferior/countinferior;
	puts("<idades acima da media>");
	for(i=0;i<LIM;i++){
		if(idades[i]>mediaidade){
			puts(nomes[i]);
		}
	}	
	puts("<pessoa mais nova>");
	puts(nomes[indicenovo]);
	puts("<pessoa mais velha>");
	puts(nomes[indicevelho]);
		puts("<media dos mais baixo que 1.5m>");
	printf("%d",mediainferior);

    
    return 0;
}