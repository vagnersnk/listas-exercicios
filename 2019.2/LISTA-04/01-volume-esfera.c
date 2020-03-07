#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

float volume(float raio){
	float volume=0;
	volume = (pow(raio,3.0)* 3.14*4)/3;
	
	return (volume);
	
}

int main() {
	float entrada,final;
	puts("insira o raio");
	scanf("%f",&entrada);
	final = volume(entrada);
	printf("Volume =%f",final);
	

  
    
    return 0;
}

