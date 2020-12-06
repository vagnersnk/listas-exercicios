#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	int num,prod,n=1;
 	printf("insira um numero: \n");
 	scanf("%d",&num);
 	prod = n * (n+1) *(n+2);
 	
 	while(prod<num){
 		n++;
 		prod = n * (n+1) *(n+2);
	}
 		
 		if(prod == num){
 			 printf("numero [%d] e tringular",num);
		}else{
			printf("nao e tringular",num);
		}
			
 
}