#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,count=0,a=0,i=0;
    printf("Digite os numeros [ao digititar numeros negativos o programa irá parar]");
    while(1){
    	scanf("%d",&entrada);
    	if(entrada<0){
    		printf("quantidade digitada: %d \n soma dos numeros digitados: %d",count,a);
    		break;
		}else{
			count = count + 1;
			a = entrada + a;
		
			
		}
    	
	}

    
	
	return 0;
}