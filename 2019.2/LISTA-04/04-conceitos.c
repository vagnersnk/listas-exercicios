#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

char conceito(float med){
	char result;
	if(med > 9.0){
		result = 'a';
	}
	else if( med > 7.0 && med < 8.9){
		result = 'b';
	}
	else if(med > 5.0 && med < 6.9 ){
		result = 'c';
	}
	else {
		result = 'd';
	}
	
	return (result);	
	
	
	
}


int main() {

	float h;
	char f;
	puts("insira um a media:\n");
	scanf("%f",&h);
	f = conceito(h);
	printf("Nota [%f] tem conceito: %c",h,f);
	

  
    
    return 0;
}