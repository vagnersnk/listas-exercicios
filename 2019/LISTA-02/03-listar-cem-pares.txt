#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i=2;
	
	do{
		printf_s("%d\n", i);
		i = i + 2;
	} while (i < 100);
	
	
	return 0;
}