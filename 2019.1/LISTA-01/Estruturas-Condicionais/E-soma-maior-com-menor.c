#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int a,b,c;
    printf("insira tres valores:  ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b) {
        if (b > c) {
            printf("%d \n",c+a);
        }else if (a > c) {
            printf("%dn", b + a);
        }else {
            printf("%d \n", b + c);
        }
    }else {
        if (b > c) {
            if (a > c) {
                printf("%d \n", c + b);
            }else {
                printf("%d \n", a+ b);
            }
        }else {
            printf("%d \n", a+ c);
        }
    }
    system("PAUSE");
    return 0;
}

