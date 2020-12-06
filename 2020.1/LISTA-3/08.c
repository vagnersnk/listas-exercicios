#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
 {
 	int ver=1,km,ms,km1,ms1;
 	do{
 		printf("Escolha a opcao\n0-Para sair\n1- Km/h para m/s\n2-m/s para Km/h\n");
 		scanf("%d",&ver);
 		switch(ver){
 			case 0:
 				printf("Encerrando sistema\n");
 				system("PAUSE");
 			case 1:
 				printf("insira o Km/h");
 				scanf("%d",&km1);
 				ms1 = km1 / 3.6
 				printf("Em m/s : %d\n",ms1);
 				break;
 			case 2:
 				printf("insira o m/s");
 				scanf("%d",&ms);
 				km = ms * 3.6;
 				printf("Em Km/h : %d\n",km);
			 	break;	
			default:
				printf("Opcao invalida\n");
				 	
		 }
 		
	 }while(1);

 	
 	

 	
 
			
 return 0;
}
