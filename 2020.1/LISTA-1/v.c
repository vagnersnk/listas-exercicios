#include <stdio.h>
#include <stdlib.h>



int main() {
    int base,expoente,i,res=1;
    printf("insira a base e o expoente: \n");
    scanf("%d%d",&base,&expoente);
    for(i=0;i<expoente;i++){
    	res *=  base;
    		
	}
	printf("resultado = %d\n",res);

	return 0;
}