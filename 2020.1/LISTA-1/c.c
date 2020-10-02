#include <stdio.h>
#include <stdlib.h>



int main() {
	int altura,raio,volume;
	printf("insira a altura e o raio da lata:\n");
	scanf("%d%d",&altura,&raio);
	volume = 3.14159 * (raio*raio)*altura;
	printf("volume = %d",volume);
	
	return 0;
}