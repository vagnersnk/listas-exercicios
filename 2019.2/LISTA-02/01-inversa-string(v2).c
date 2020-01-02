#include <stdio.h>
#include <string.h>

#define LIM 10

int main() {
    char string[LIM];
    puts("Insira a string");
    gets(string);
    strrev(string);
    puts(string);


    return 0;
}