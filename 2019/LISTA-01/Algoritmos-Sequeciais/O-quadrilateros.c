#include <stdio.h>
#include <stdlib.h>




int main() {

    int a,b,c,d;
    printf("insira os lados: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a == b && a == c && a == d){

        printf("e quadrado\n");
    }else{
        printf("nao e quadrado\n");
    }


 




    return 0;
}
