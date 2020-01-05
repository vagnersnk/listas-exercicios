#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIM 10

int main() {
    char stringone[LIM],stringtwo[LIM];
    int i,j;
    puts("Insira a primeira string");
    gets(stringone);
    puts("Insira a segunda string");
    gets(stringtwo);
    int tamanho1 = strlen(stringone);
    int tamanho2 = strlen(stringtwo);
    int tamanhototal = tamanho1+tamanho2;
    char stringtre[tamanhototal];
    for(i=0,j=0;i<tamanhototal;i+=2,j++){
        
                stringtre[i] = stringone[j];
                stringtre[i+1] = stringtwo[j];
    }
    puts(stringtre);


    return 0;
}