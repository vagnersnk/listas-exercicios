#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int entrada,i=0,n=0;
	printf("Insira um valor:");
	scanf_s("%d", &entrada);
	while (i < entrada) {
		i = i + 1;
		n = n + i;
	}
	printf_s("%d", n);
	
	return 0;
}