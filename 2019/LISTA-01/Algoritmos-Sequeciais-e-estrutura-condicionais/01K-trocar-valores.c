#include <stdio.h>
#include <stdlib.h>




int main() {

    int a,b;
    printf("insira um valor: ");
    scanf("%d",&a);
    printf("insira outro valor: ");
    scanf("%d",&b);
    a= a-b;
    b = a+b;
    a = b-a;
    printf("valor de a : %d \n valor de b: %d",a,b);




    return 0;
}