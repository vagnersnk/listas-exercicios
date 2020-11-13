#include <stdio.h>


#include <math.h>
void primo(int num1){
    int i,count=0;
    for(i=1;i<=num1;i++){
      if(num1 % i == 0){
        count ++;
      }
    }
    if(count == 2){
      printf("o numero [%d] é primo",num1);
    }
    else{
      printf("o numero [%d] não é primo",num1);

    }
   

}

int main() {
  int entrada,result;
  printf("digite um numero\n:");
  scanf("%d",&entrada);
  primo(entrada);

  }