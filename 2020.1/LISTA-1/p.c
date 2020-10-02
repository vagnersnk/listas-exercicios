#include <stdio.h>
#include <stdlib.h>



int main() {
    float sm,pr,ns;
    printf("insira o salario e o raejuste:\n");
    scanf("%f%f",&sm,&pr);
    ns = (sm / 100) * pr;
    printf("salario= %f",ns+sm);
    
  
    
    
    
	
	return 0;
}