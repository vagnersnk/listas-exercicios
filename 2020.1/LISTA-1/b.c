#include <stdio.h>
#include <stdlib.h>



int main() {
	int c,f;
	printf("insira a temperatura em Fahrenheit:\n");
	scanf("%d",&f);
	c= ((f-32)*5)/9;
	printf("Celsius: %d",c);
	return 0;
}