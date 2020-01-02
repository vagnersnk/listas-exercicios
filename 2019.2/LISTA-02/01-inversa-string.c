#include <stdio.h>
#include <string.h>

#define LIM 10

int main() {
    char string[LIM];
    int i;
    puts("Insira a string");
    gets(string);
    for(i=strlen(string)-1;i>-1;i--){
        printf("%c",string[i]);
    }

    return 0;
}