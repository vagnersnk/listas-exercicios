#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,i;

    printf("Isira o numero:");
    scanf("%i",&entrada);

    for(i=1;i<=entrada;i+=(5*entrada)*((2*(i*2)+(5*i)+1))) {
            printf("result =%i\n",i);
       


    }






    return 0;
}
