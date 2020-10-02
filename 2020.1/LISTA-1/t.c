#include <stdio.h>
#include <stdlib.h>



int main() {
    float distancia,tempo,velocidade;
    printf("insira a distancia e o tempo:\n");
    scanf("%f%f",&distancia,&tempo);
    velocidade = (distancia * 1000)/ (tempo * 60);
    printf("velocidade = %f",velocidade);
   

        
	
	return 0;
}