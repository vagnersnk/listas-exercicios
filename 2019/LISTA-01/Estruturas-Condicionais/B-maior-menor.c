#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int a,b;
    printf("insira dois valores:  ");
    scanf("%d%d",&a,&b);
    if(a > b){
        printf("primeiro: %d\nsegundo: %d \n",a,b);
    }else{
        printf("primeiro: %d\nsegundo: %d \n",b,a);
    }


    system("PAUSE");
    return 0;
}
