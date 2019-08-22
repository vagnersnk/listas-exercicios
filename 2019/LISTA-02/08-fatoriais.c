#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,n,i;

    printf("Digite Valores\nDigite(-1) para sair\n-----------\n");
    while(1){
    	scanf("%d",&entrada);
    	if (entrada != -1){
    	    for(i =1;entrada>1;entrada--){
    	        i = i* entrada;
    	    }
            printf("Exibindo Fatorial de %d igual a %d\n",entrada,i);


    	}else{
    	    printf("Programa encerrado");
            break;
    	}

    	
	}

    
	
	return 0;
}