#include <stdio.h>
#include <stdlib.h>



int main() {
    int a,b,aux;
    printf("insira A e B:\n");
    scanf("%d%d",&a,&b);
    aux = a;
    a = b;
    b= aux;
    printf("A = %d\nB = %d",a,b);
	
	return 0;
}