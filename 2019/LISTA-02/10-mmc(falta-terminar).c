#include <stdio.h>

int main() {
   int num1,num2,i,j,div=0,div2=0;
   printf("Insira dois numeros: ");
   scanf("%i%i",&num1,&num2);
   if(num1>num2){
       for(i=0;i<num1;i++){
           div = num1*i;
           //printf("1[%i]\n",div);
          for(j=0;j<num1;j++){
               //printf("2[%i]\n",div2);
               div2= num2*j;

       }


       }if(div = div2){
           printf("I[%i]\n",div);
           //break;
       }


   }

    return 0;
}
