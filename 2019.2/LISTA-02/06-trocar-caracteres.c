#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIM 10

int main() {
    char string[LIM],chatual,chnovo;
    int count=0,i;
    puts("Insira a string");
    gets(string);
    puts("Insira chatual");
    scanf("%c",&chatual);
    puts("Insira chnovo");
    scanf(" %c",&chnovo);
    for(i=0;i<strlen(string);i++){
        if(string[i] == chatual){
            string[i] = chnovo;
            count++;
        }
    }

    puts(string);
    printf("foram feitas: %d trocas",count);

    return 0;
}
