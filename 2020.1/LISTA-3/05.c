#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
 {
 	int j1,j2=1,count=0;
 	printf("jogador 1 insira o numero:\n");
 	scanf("%d",&j1);
 	system("cls || clear");
 	while(j2){
 			printf("jogador 2 insira o numero:\n");
 			scanf("%d",&j2);
 			count++;
 			if(j1==j2){
 				printf("acertou mizeravi\n");
 				break;
			 }
			 else{
			 	printf("errooou\n");
			 }	
			
	 }
	 printf("tentativas: %d\n",count);
 	
 
			
 return 0;
}
