#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIM 10

int main() {
    char string[LIM];
    int i,count;
    puts("Insira a string");
    gets(string);
    count = 0;
    for(i=0;i<strlen(string)-1;i++){
        if(islower(string[i])){
            count++;
        }
    }
    printf("palavra com: %d minusculas",count);




    return 0;
}
