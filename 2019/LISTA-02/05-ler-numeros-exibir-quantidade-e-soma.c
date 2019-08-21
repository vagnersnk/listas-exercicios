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
    		printf("quantidade digitada: %d \n soma dos numeros digitados: %d",count,i);
    		break;
		}else{
			count = count + 1;
			a = a + 1;
			i = i + a;
			
		}
    	
	}

    
	
	return 0;
}