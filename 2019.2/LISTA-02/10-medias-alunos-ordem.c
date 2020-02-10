#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 3
#define MAT 4

int main() {
    char nomes[LIM][30],aux[30];
    float notas[LIM][6];
    int idades[LIM];
    float medias[LIM];
    int i,j,t,k,soma,media;
    
    
	for(i=0;i<LIM;i++){
		printf("<insira o nome do aluno: [ %d ]>\n",i);
		fflush(stdin);
		gets(nomes[i]);
		printf("<insira a idade do aluno: [ %d ] >\n",i);
		scanf("%d",&idades[i]);
		for(j=0;j<MAT;j++){
			printf("<insira a nota [ %d ] do aluno: [ %d ] >\n",j,i);
			scanf("%f",&notas[i][j]);
		}
	}
	for(i=0;i<LIM;i++){
		soma = 0;
		media = 0;
		for(j=0;j<MAT;j++){
			soma += notas[i][j];
		}
		media = soma/MAT;
		medias[i]= media;
	}
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(medias[i]>medias[j]){
	
				//nomes
				strcpy(aux,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],aux);
				
				//idades
				k = idades[i];
				idades[i]= idades[j];
				idades[j]= k;
				
				//medias
				t = medias[i];
				medias[i] = medias[j];
				medias[j] = t;
				
			}
		}
		
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(strcmp(nomes[i],nomes[j])>0){
				//nomes
				strcpy(aux,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],aux);
				
				//idades
				k = idades[i];
				idades[i]= idades[j];
				idades[j]= k;
				
			}
		}
		
	}

	for(i=0;i<3;i++){
		puts(nomes[i]);
		printf("<idade =%d> <media=%f>\n",idades[i],medias[i]);
	}
	
	

    
    return 0;
}
