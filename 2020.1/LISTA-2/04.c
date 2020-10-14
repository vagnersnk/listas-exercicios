#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
	float altura,peso,imc;
	int sexo; //0- Masculino 1- Feminino
	printf("insira o sexo 0 para masculino e 1 para feminino\n");
	scanf("%d",&sexo);
	printf("insira a altura e o peso\n");
	scanf("%f%f",&altura,&peso);
	if(sexo == 0){
		imc = (72.7 * altura) - 58;
				
	}
	if(sexo == 1){
		imc = (62.1 * altura) - 44.7;	
	}
	if(imc>peso){
			printf("Diferenca de peso: %f KG\nPeso normal ou abaixo do ideal\n",peso-imc);
	}else{
			printf("Diferenca de peso: %f KG\nPeso acima do Ideal\n",peso-imc);	
		}
	

   
 

	return 0;
}