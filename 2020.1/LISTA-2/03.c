#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
	float sal,pres,percent;
	printf("insira o salario e o valor da prestacao\n");
	scanf("%f%f",&sal,&pres);
	percent = sal * 0.3;
	if(pres <= percent){
		printf("pode");
	}else{
		printf("nao pode");
	}

   
 

	return 0;
}