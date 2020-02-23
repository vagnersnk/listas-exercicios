#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



typedef struct {
	int idade;
	int media;
	
}aluno;


int main() {
   aluno *a;
   a = malloc(sizeof(aluno));
   int i,k,count=0;
   for(i=0;i<sizeof(a);i++){
   	 	printf("Insira a idade e media do aluno [%d]\n",i);
   		scanf("%d",&a[i].idade);
   		scanf("%d",&a[i].media);
   		count++;
   		printf("Deseja inserir um novo aluno?\n1-Sim\n2-Nao\n");
   		scanf("%d",&k);
   		if( k == 2){
   			break;
		   }
   }
   for(i=0;i<count;i++){
   	printf("Exibindo a idade e media do aluno [%d]:\n",i);
    printf(" idade: %d\n",a[i].idade);
    printf(" media: %d\n",a[i].media);
   	
   }
  
    
    
    return 0;
}