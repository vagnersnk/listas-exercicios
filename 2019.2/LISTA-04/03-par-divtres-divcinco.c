#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int par(int in){
	if( in % 2 ==0){
		return 1;
	}
	return 0;
	
}
int divfive(int in){
	if( in % 5 ==0){
		return 1;
	}
	return 0;
	
}

int divtr(int in){
	if( in % 3 ==0){
		return 1;
	}
	return 0;
	
}

int main() {
	/* 
	p = par
	t = tres
	f = cinco
	*/
	int h,p,t,f;
	puts("insira um numero:\n");
	scanf("%d",&h);
	p = par(h);
	t = divtr(h);
	f = divfive(h);
	
	printf("Numero [%d] resultados:\n>>par = %d\n>>por tres = %d\n>>por cinco = %d",h,p,t,f);
	

  
    
    return 0;
}