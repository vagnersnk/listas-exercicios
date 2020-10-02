#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
	float base,indice,raiz,x;
	printf("insira a base e o indice: \n");
	scanf("%f%f",&base,&indice);
	x = 1/ indice;
	raiz = pow(base,x);
	printf("raiz = %f",raiz);
   
 

	return 0;
}