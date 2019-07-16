#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int a,b,c;
    printf("insira tres valor:  ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b) {
        if (b > c) {
            printf("%d | %d | %d\n", c, b, a);
        }else if (a > c) {
            printf("%d | %d | %d\n", b, c, a);
        }else {
            printf("%d | %d | %d\n", b, a, c);
        }
    }else {
        if (b > c) {
            if (a > c) {
                printf("%d | %d | %d\n", c, a, b);
            }else {
                printf("%d | %d | %d\n", a, c, b);
            }
        }else {
            printf("%d | %d | %d\n", a, b, c);
        }
    }
    system("PAUSE");
    return 0;
}
