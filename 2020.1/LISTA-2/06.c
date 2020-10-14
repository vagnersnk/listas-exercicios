#include <stdio.h>
#include <stdlib.h>


int main ()
{
   int A,B,C;
  
   if(A){
   	printf("Comando 1!");
   }else if (B){
   	if(C){
   		printf("comando 2!");
	   }else{
	   	printf("comando 3!");
	   	printf("comando 4!");
	   }
	   printf("comando 5!");
   }
   printf("comando 6!");
   system("PAUSE");
    return 0;
}