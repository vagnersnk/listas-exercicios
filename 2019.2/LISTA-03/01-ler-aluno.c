#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct DadosAluno{
	int idade;
	int media;
	
};


int main() {
   struct DadosAluno aluno1;
   puts("Insira a idade e media do aluno\n");
   scanf("%d",&aluno1.idade);
   scanf("%d",&aluno1.media);
    puts("Exibindo aluno\n");
    printf(" idade: %d\n",aluno1.idade);
    printf(" media: %d\n",aluno1.media);
	
	

    
    return 0;
}