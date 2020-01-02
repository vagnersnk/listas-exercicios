#include <stdio.h>
#include <string.h>

#define LIM 10

int main() {
    char string[LIM],reversa[LIM];
    int result=0;
    puts("Insira a string");
    gets(string);
    strcpy(reversa,string);
    strrev(reversa);
    result = strcmp(string,reversa);
    if (result ==0){
        puts("palindromo detectado");
    }
    else{
        puts("nao palindromo");
    }



    return 0;
}
