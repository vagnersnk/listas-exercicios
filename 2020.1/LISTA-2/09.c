#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	float x;
 	printf("insira X\n");
 	scanf("%f",&x);
 	if(x<=1){
 		printf("Y= 1\n");
	 }
	 else if(x>1 && x<=2){
	 	printf("Y= 2\n");
	 }else if(x>2 && x<=3){
	 	printf("quadrao Y= %f\n",pow(x,2));
	 }else if(x>3){
	 	printf("cubo Y= %f\n",pow(x,3));
	 }
 
}