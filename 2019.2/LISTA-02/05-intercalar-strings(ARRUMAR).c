#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIM 10

int main() {
    char stringone[LIM],stringtwo[LIM],stringtre[LIM];
    int i,j,k;
    puts("Insira a primeira string");
    gets(stringone);
    puts("Insira a segunda string");
    gets(stringtwo);
    int tamanho1 = strlen(stringone);
    int tamanho2 = strlen(stringtwo);
    int tamanhototal = tamanho1+tamanho2;
    for(i=0;i<tamanhototal;i++){
        for(j=0;j<tamanho1;j++){
            for(k=0;k<tamanho2;k++){
                stringtre[i] = stringone[j] + stringtwo[k];
            }
        }


    }

    puts(stringtre);
    

    return 0;
}
