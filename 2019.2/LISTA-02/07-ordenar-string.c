#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIM 10

int main() {
    char nomes[2][LIM],aux[LIM];
    int i,j;
    for(i=0;i<2;i++){
    	printf(">>Digite o %d nome:\n", i);
        fflush(stdin);
        gets(nomes[i]);
	}
	if(strcmp(nomes[0],nomes[1]) ==0){
		puts("string iguais");
	}else{	
   
	   for(i=0;i<2;i++){
			for(j=i+1;j<2;j++){
				if(strcmp(nomes[i],nomes[j]) > 0){
						strcpy(aux,nomes[i]);
						strcpy(nomes[i],nomes[j]);
						strcpy(nomes[j],aux);
					}
					}
					}
	
			for(i=0;i<2;i++){
			
				puts(nomes[i]);
			}
	}

    return 0;
}