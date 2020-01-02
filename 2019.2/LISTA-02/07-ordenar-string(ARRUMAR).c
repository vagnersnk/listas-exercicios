#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIM 10

int main() {
    char string[LIM],stringtwo[LIM],aux[LIM];
    int i,j;
    puts("Insira a string");
    gets(string);
    puts("Insira outra string");
    gets(stringtwo);
    if(strcmp(string,stringtwo) == 0){
        puts("string iguais");
    }else{
        for(i=0;i<LIM;i++){
            for(j=i+1;j<LIM;j++){
             if(strcmp(string[i],string[j] >0)){
                 strcpy(aux,string[i]);
                 strcpy(string[i],string[j]);
                 strcpy(string[j],aux);
             }

            }
        }
        puts(string);

    }



    return 0;
}
