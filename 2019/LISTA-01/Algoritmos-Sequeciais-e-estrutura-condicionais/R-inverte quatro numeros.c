#include <math.h>

void main()
{
    int i, n;
    int num, max[5];

    printf("Digite um numero: ");
    scanf("%i", &num);

    for(i=0; num; i++)
    {
        max[i] = num % 10;
        num /= 10;
    }

    for(n=0; n<i; j++)
    { num += max[n] * pow(10, (i-n-1)); }

    printf("Resultado: %i", num);

}

