#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i=0;
	
	while (i < 100) {
		printf_s("%d\n", i);
		i = i + 2;
	}
	
	
	return 0;
}