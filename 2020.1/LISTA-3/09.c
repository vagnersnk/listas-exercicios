#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
 {
 	char ver;
 	int num1,num2,maior=0,num3,num4,res=0;
 	do{
 		printf("Escolha a opcao:\nC- para calcular mmc\nD- para calcular mdc\nN - para sair\n\n");
 		scanf("%c",&ver);
 		switch(ver){
 			case 'N':
			 	printf("encerrando programa");
				system("PAUSE"); 
			case 'C':
				   printf("Insira dois numeros: \n");
				   scanf("%i%i",&num1,&num2);
				   if (num1>num2){
				       maior = num1;
				   }else{
				       maior = num2;
				   }
				   while(1){
				       if (maior % num1 ==0 && maior % num2 ==0){
				           printf("mmc : %i\n",maior);
				           break;
				       }else{
				           maior++;
				       }
				   }
 				break;
 			case 'D':
				   printf("Insira dois numeros: \n");
				   scanf("%i%i",&num3,&num4);
				   res = num3 % num4;
				   num3 = num4;
				   num4 = res;
				   printf("mdc: %i\n",num3);
				
 				break;
					
		 }
		 
 		
 	
 		
 	
 		
	 }while(1);

 	
 	

 	
 
			
 return 0;
}