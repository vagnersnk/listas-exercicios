#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	int x,u,d,c,m,o;
 	printf("insira X\n");
 	scanf("%d",&x);
 	u = x / 1  %10;
 	d = x / 10 %10;
 	c = x / 100 %10;
 	m = x / 1000 %10;
 	if((m+c) % 4 ==0){
 		printf("m = %d + c= %d resulta em =%d ,e e multiplipo de 4\n\n",m,c,m+c);
	 }
 	printf("unidade: %d\ndezena: %d\nCententa: %d\nMilhar : %d",u,d,c,m);
 	
 
}