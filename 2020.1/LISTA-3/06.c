#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
 {
 	int ini=400,fim=600,soma=0,pri=0;
 	while(ini<fim){
 		ini++;
 		if(ini % 2 == 0){
 			soma += ini;
		 }
		if(ini % ini == 0){
			soma += ini;
		} 
	 }
	 printf("soma = %d",soma);
 	
 
			
 return 0;
}