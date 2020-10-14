#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {
	int a;
	printf("insira um numero:\n");
	scanf("%d",&a);
	if(a % 10 ==0){
			printf("Divisivel por 10\n");
	}else if(a % 5 ==0) {
		printf("Divisivel por 5\n");
	}else if( a % 2 == 0){
		printf("Divisivel por 2\n");
	}else{
		printf("Divisivel por \n");
	}

   
 

	return 0;
}