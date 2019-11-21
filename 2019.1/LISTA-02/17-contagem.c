#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada,i;

    printf("Isira o numero:");
    scanf("%i",&entrada);

    for(i=1;i<entrada+1;i++) {
            printf("%i\n",i);



    }






    return 0;
}

