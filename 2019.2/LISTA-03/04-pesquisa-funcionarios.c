#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 30

struct Funcionarios{
	char nome[30];
	int mes;
	int rg;
	float salario;
	
};


int main() {
	struct Funcionarios empregados[LIM];
	int i,entrada=0;
	for(i=0;i<LIM;i++){
		printf("Insira o nome,mes,rg e salario do funcionario [%d] :\n",i);
		fflush(stdin);
		gets(empregados[i].nome);
		scanf("%d",&empregados[i].mes);
		scanf("%d",&empregados[i].rg);
		scanf("%f",&empregados[i].salario);
	}
	do{
		puts("insira o mes para pesquisar, qualquer numero que nao esteja entre 1-12 encerra o programa:\n");
		scanf("%d",&entrada);
		for(i=0;i<LIM;i++){
			if(empregados[i].mes == entrada){
				printf(">>USUARIO ENCONTRAD<<\nNome: %s\nMes: %d\nRg: %d\nSalario: %f\n-----------\n",
																  empregados[i].nome,
																  empregados[i].mes,
																  empregados[i].rg,
																  empregados[i].salario);
			}
		}
	}while(entrada >0 && entrada <=12);
	
		
   
	
    
    return 0;
}