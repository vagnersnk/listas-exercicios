#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    float altura;
    char sexo;
    printf("insira sua altura:  ");
    scanf("%f",&altura);
    printf("insira o sexo:  ");
    scanf(" %c",&sexo);
    if (sexo == 'm'){
        printf("%f",(altura*72.4)-54);
    }if(sexo== 'f'){
        printf("%f",(altura*62.1)-44.7);
    }




    system("PAUSE");
    return 0;
}