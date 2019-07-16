#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int a,b;
    printf("insira dois valor:  ");
    scanf("%d%d",&a,&b);
    if(a > b){
        printf("%d",a);
    }else{
        printf("%d\n",b);
    }


    system("PAUSE");
    return 0;
}
