#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int duracao(int hora,int minuto, int segundo){
	int tempo=0;
	tempo = ((hora*60)*60)+ (minuto*60) + segundo;
	
	return (tempo);
	
}

int main() {
	int h,m,s,final;
	puts("insira a hora,minuto,segundo:\n");
	scanf("%d%d%d",&h,&m,&s);
	final = duracao(h,m,s);
	printf("Total =%d",final);
	

  
    
    return 0;
}
