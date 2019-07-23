#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int a,b,c,d,media;
    printf("insira as quatro notas:  ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    media = (a+b+c+d)/4;
    printf("a media foi: %d \n",media);
    if (a > media){
        printf("a primeira nota foi maior que a media:\n");
    }if (a<media){
        printf("a primeira nota foi menor que a media:\n");
    }if (b>media){
        printf("a segunda nota foi maior que a media:\n");
    }if (b<media){
        printf("a segunda nota foi menor que a media:\n");
    }if (c>media){
        printf("a terceira nota foi maior que a media:\n");
    }if (c<media){
        printf("a terceira nota foi menor que a media:\n");
    }if (d>media){
        printf("a quarta nota foi maior que a media:\n");
    }if (d<media){
        printf("a quarta nota foi menor que a media:\n");
    }else{
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
