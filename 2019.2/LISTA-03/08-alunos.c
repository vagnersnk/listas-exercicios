#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <DOS.H>

#define LIM 3
#define NOTAS 6

struct Alunos{
   char nome[30];
   int idade;
   float media[NOTAS];
   float mediageral;
	
};


int main() {
	struct Alunos aln[LIM];
	char pesquisa[30],tmp[30];
	int i,k,j,l,n,m=0,pl,count =0;
	
	while(1){
		puts(">>Menu<<\n1-Inserir aluno\n2-Pesquisar Aluno por nome\n3-Pesquisar media por disciplina\n4-Ver top 3 alunos com maior media\n5-Ver codigos das disciplinas\n6-SAIR\n-------------\n");
		scanf("%d",&k);
		switch(k){
			case 1:
				printf(">insira o nome do aluno %d\n",count);
				fflush(stdin);
				gets(aln[count].nome);
				printf(">insira a idade do aluno %d\n",count);
				scanf("%d",&aln[count].idade);
				for(i=0;i<NOTAS;i++){
					printf(">insira a media: [%d] do aluno %d\n",i,count);
					scanf("%f",&aln[count].media[i]);
					
				}
				
				count++;
				sleep(1);
				system("clear||cls");
				
				
				break;
				
			case 2:
				
				puts("Insira o nome do  Aluno\n");
				fflush(stdin);
				gets(pesquisa);
				if(count==0){
					puts("nenhuma aluno cadastrado");
					break;
				}
				for(i=0;i<count;i++){
					if(strcmp(aln[i].nome,pesquisa)==0){
						printf(">>Aluno encontrado<<\nMome: %s\nIdade: %d\n",aln[i].nome,aln[i].idade);
					}else{
						puts("nao encontrado");
						sleep(1);
				        system("clear||cls");
					}
				}
				break;
		
		    case 3:
		    	puts("insira qual aluno desejar ver a media");
		    	scanf("%d",&l);
		    	if(l>count){
		    			puts("aluno nao cadastrado");
		    			break;
				}
		    	puts("insira o codigo da disciplina");
		    	scanf("%d",&k);
		    	if(k < 0 || k > NOTAS){
		    		puts("Disciplina nao encontrada. Entre na opcao 5 do menu para ver os codigos.\n");
		    		break;
				}
				printf(">> Exibindo media %d do aluno %d\nNome: %s\nMedia= %f\n",k,l,aln[l].nome,aln[l].media[k]);
		    	
				break;
			
			case 4:
			
				for(i=0;i<LIM;i++){
					for(j=0;j<NOTAS;j++){
						aln[i].mediageral += aln[i].media[j];
					}	
				}
				for(i=0;i<LIM;i++){
					for(j=i+1;j<LIM;j++){
						if(aln[i].mediageral> aln[j].mediageral){
							m = aln[i].mediageral;
							aln[i].mediageral = aln[j].mediageral;
							aln[j].mediageral = m;
							
							strcpy(tmp,aln[i].nome);
							strcpy(aln[i],aln[j]);
							strcpy(aln[j],tmp)	
							
							n = aln[i].idade;
							aln[i].idade = aln[j].idade;
							aln[j].idade = n;						
						}
					}
				}
				puts("Exibindo Top 3 Alunos");
				for(i=0;i<3;i++){
					puts(aln[i].nome);
				}
				
				break;
				
		    case 5:
		    	puts(">>CODIGOS DISCIPLINAS<<\n0-Quimica\n1-Fisica\n2-Calculo\n3-Probabilidade\n4-Algoritmo\n5-Mecanica\n>>>>>>>>>>>>>>>\n");
				break;
				
		    case 6 :
		    	puts("Encerrando programa");
		    	exit(1);
				break;
		 
	
			  	
		    default :
		    	puts("Alternativa incorreta Encerrando o programa");
				exit(1);	
		}
	}
    return 0;
}