#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 2


int main() {
    char nomes[LIM][30],aux[LIM],mat[LIM];
    char matricula[LIM][6];
    int salario[LIM];
    int tempo[LIM];
    int i,j,soma=0,media=0,count=0;

    
    
	for(i=0;i<LIM;i++){
		printf("<insira o nome do funcionario: [ %d ]>\n",i);
		fflush(stdin);
		gets(nomes[i]);
		printf("<insira a matricula do funcionario: [ %d ]>\n",i);
		fflush(stdin);
		gets(matricula[i]);
		printf("<insira o tempo de vinculo do funcionario: [ %d ]>\n",i);
		fflush(stdin);
		scanf("%d",&tempo[i]);
		printf("<insira o salario do funcionario: [ %d ]>\n",i);
		fflush(stdin);
		scanf("%d",&salario[i]);
	
	}
	for(i=0;i<LIM;i++){
		if(tempo[i]>20){
			soma+= salario[i];
			count++;
		}
		media = (float)soma/count;
	}
	printf(">>media com mais de 20 anos %d<<\n",media);
	for(i=0;i<LIM;i++){
		for(j=i+1;j<LIM;j++){
			if(tempo[i]>10){
				strcpy(aux,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],aux);
				
				strcpy(mat,matricula[i]);
				strcpy(matricula[i],matricula[j]);
				strcpy(matricula[j],mat);
			}
		}
	}
	puts(">>imprimindo nomes e matriculas<<\n");
	for(i=0;i<LIM;i++){
			puts(nomes[i]);
			puts(matricula[i]);
			puts("-------------\n");
		
	}
	


	

    
    return 0;
}