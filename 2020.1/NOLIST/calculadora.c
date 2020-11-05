#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	int i=0,j;
 	while(i<10){
 		i++;
 		j=1;

 		while(j<10){
 			printf("[%d] -- [%d] = [%d]\n",i,j,i*j);
 			
 			j++;	
		 }
		 printf("\n");
		 
 
	 }
 
}