#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <DOS.H>

#define LIM 2


struct Funcionarios{
   char nome[30];
   int matricula;
   float salario;
   int vinculo;
	
};


int main() {
	struct Funcionarios fnc[LIM];
	char aux[30];
	float soma=0,media=0;
	int i,j,k,count =0,countsal=0;
	
	while(1){
		puts(">>Menu<<\n1-Inserir funcionario\n2-Pesquisar funcionario  por matricula\n3-Listar funcionarios em ordem alfabetica\n4-Quantidade de funcionarios com salario acima da media\n5-Sair\n-------------\n");
		scanf("%d",&k);
		switch(k){
			case 1:
				printf(">insira o nome do funcionario %d\n",count);
				fflush(stdin);
				gets(fnc[count].nome);
				printf(">insira a matricula do funcionario %d\n",count);
				scanf("%d",&fnc[count].matricula);
				printf(">insira o salario do funcionario %d\n",count);
				scanf("%f",&fnc[count].salario);
				printf(">insira o tempo de vinculo do funcionario %d\n",count);
				scanf("%d",&fnc[count].vinculo);
				
				
				count++;
				sleep(1);
				system("clear||cls");
			
				
				break;
				
			case 2:
				if(count==0){
					puts("nenhuma funcionario cadastrado");
					break;
				}
				puts("Insira a matricula do  funcionario\n");
				
				scanf("%d",&k);
			
				for(i=0;i<count;i++){
					if(fnc[i].matricula==k){
						printf(">>Funcionario encontrado<<\nMome: %s\nSalario: %f\nVicunulo: %d\n",fnc[i].nome,fnc[i].salario,fnc[i].vinculo);
					}
				}
				break;
		
		    case 3:
		    	
		    	for(i=0;i<LIM;i++){
		    		for(j=i+1;j<LIM;j++){
		    			if(strcmp(fnc[i].nome,fnc[j].nome) >0){
		    				strcpy(aux,fnc[i].nome);
		    				strcpy(fnc[i].nome,fnc[j].nome);
		    				strcpy(fnc[j].nome,aux);
						}
					}
				}
				puts("Exibindo funcionarios em ordem alfabetica");
				for(i=0;i<LIM;i++){
					puts(fnc[i].nome);
				}
		    
				break;
			
			case 4:
			
				
				for(i=0;i<LIM;i++){
					soma += fnc[i].salario;
				}
				media = soma / LIM;
				for(i=0;i<LIM;i++){
					if(fnc[i].salario > media){
						countsal++;
					}
				}
				printf("\nQuantidade de funcionarios acima da media : %d\n",countsal);
				
				
				break;
				
		
				
		    case 5 :
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