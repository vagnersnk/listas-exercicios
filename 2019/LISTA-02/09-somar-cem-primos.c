#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int inicio = 2,div=0,count,soma=0;

    while(inicio < 100)
    {
        for(div=1; div<=100; div++)
        {
            if(inicio%div == 0)
                count++;

        }

        if(count==2)
        {

            soma = soma+inicio;

        }

        count = 0;
        inicio++;

    }
    printf("%i\n",soma);

    
	
	return 0;
}