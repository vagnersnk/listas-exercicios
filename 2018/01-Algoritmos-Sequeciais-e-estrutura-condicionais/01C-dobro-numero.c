#include <stdio.h>
#include <ctype.h>


int main() {
 int entrada,saida;
 printf("Digite um numero:  ");
 scanf("%d",&entrada);
 if (entrada < 0){
     printf("Valor invalido. Insira um numero inteiro");
     return 0;
 }else
 {
     saida = entrada * 2;
     printf("O dobro do numero %d resulta em : %d ",entrada,saida);
     return 0;

 }