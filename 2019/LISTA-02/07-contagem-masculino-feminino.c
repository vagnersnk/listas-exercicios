#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int count=0,m=0,f=0,percm,percf,sexo;

    printf("Digite\n(2) para masculino\n(1) para feminino\n(0) para sair\n");
    while(1){
    	scanf("%d",&sexo);
    	if(sexo == 2){
            count = count + 1;
            m = m + 1;


		}else if (sexo == 1){
            count = count + 1;
            f = f + 1;

		}else if(sexo == 0){
    	    percm = (m*100)/count;
    	    percf = (f*100)/count;
            printf("Recebidos : %d registros\nPercentual masculino: %d %% \nPercentual Feminono: %d %% ",count,percm,percf);
    	    break;
    	}
    	
	}

    
	
	return 0;
}
