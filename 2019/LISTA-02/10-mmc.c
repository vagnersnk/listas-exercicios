#include <stdio.h>

int main() {
   int num1,num2,maior=0;
   printf("Insira dois numeros: ");
   scanf("%i%i",&num1,&num2);
   if (num1>num2){
       maior = num1;
   }else{
       maior = num2;
   }
   while(1){
       if (maior % num1 ==0 && maior % num2 ==0){
           printf("%i",maior);
           break;
       }else{
           maior++;
       }
   }

    return 0;
}