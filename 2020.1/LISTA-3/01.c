#include <stdlib.h>
#include <math.h>

int main()
 {
 	int i=0,soma=0,div=2,x;
 	printf("insira x:\n");
 	scanf("%d",&x);
 	while(i<30){
 		i++;
 		soma += (x*pow(i,2))/div;
		div+=2;	 
 
	 }
	 printf("soma= %d",soma);
 
}