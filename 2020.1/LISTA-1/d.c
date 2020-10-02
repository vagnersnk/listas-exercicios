#include <stdio.h>
#include <stdlib.h>



int main() {
	float tempo,velocidade,distancia,litros;
	printf("insira o tempo e a velocidade:\n");
	scanf("%f%f",&tempo,&velocidade);
	distancia = tempo*velocidade;
	litros = distancia /12;
	printf("tempo: %f\nvelocidade: %f\ndistancia: %f\nlitros usado: %f\n",tempo,velocidade,distancia,litros);
	
	
	return 0;
}