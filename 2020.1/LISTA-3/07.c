#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
 {
 	int numero,unidade,dezena,centena,milhar,soma1=0,soma2=0,soma=0,segunda;
 	numero =1;
 	do{
 		printf("digite o numero de quatro digitos: \n");
 		scanf("%d",&numero);
 		unidade = numero   / 1    % 10;
 		dezena  = numero   / 10   % 10;
 		centena = numero   / 100  % 10;
 		milhar  = numero   / 1000 % 10;
 		soma1 = unidade +(dezena*10);
 		soma2 = centena + (milhar*10);
 		soma = soma1+soma2;
 		segunda = pow(soma,2);
 		if(segunda == numero){
 			printf("possui\n");
	 	}else{
	 		printf("nao possiu\n");
		 }
		if(numero<1000 || numero >9999){
			printf("sistema encerrado\n");
			break;
		} 
 		
	 }while(numero);
 	
 	

 	
 
			
 return 0;
}

