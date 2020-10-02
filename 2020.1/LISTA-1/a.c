#include <stdio.h>
#include <stdlib.h>



int main() {
	int c,f;
	printf("insira a temperatura em celcius:\n");
	scanf("%d",&c);
	f= (9*c+160)/5;
	printf("Fahrenheit: %d",f);
	return 0;
}