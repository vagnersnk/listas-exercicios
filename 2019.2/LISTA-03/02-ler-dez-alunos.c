#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LIM 10

struct DadosAluno{
	int idade;
	int media;
	
};


int main() {
   struct DadosAluno alunos[LIM];
   int i;
   for(i=0;i<LIM;i++){
   	 printf("Insira a idade e media do aluno [%d]\n",i);
   		scanf("%d",&alunos[i].idade);
   		scanf("%d",&alunos[i].media);
   }
   for(i=0;i<LIM;i++){
   	printf("Exibindo a idade e media do aluno [%d]:\n",i);
    printf(" idade: %d\n",alunos[i].idade);
    printf(" media: %d\n",alunos[i].media);
   	
   }
  
    
	
	

    
    return 0;
}