#include <stdio.h>
#include <stdlib.h>



int main() {
    float comprimento,altura,largura,volume;
    printf("insira comprimento, altura e largura:\n");
    scanf("%f%f%f",&comprimento,&altura,&largura);
    volume = comprimento * altura * largura;
    printf("volume = %f",volume);
    
    
	
	return 0;
}