#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
 {
 	int i,start =1000,soma =0;
 	while(i<50){
 		i++;
 		soma += start/i;
 		start -=3;
 		
	 }
	 printf("soma = %d",soma);
 	
 
			
 return 0;
}
