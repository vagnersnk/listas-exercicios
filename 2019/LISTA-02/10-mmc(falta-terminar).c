#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  //Calculcar o mmc entre dois numeros
  //DISGRAÇA
    setlocale(LC_ALL, "Portuguese");
    int numero1,numero2,mmc,i,j,b=0,h=0;


    printf("Digite dois valores\n");
    scanf("%d%d",&numero1,&numero2);
    mmc = numero1*numero2;
    if(numero1>numero2){
        for(i=0;i<mmc;i+=i+numero1){
          printf("%d\n",i);
    //      b = b +numero1;
    //             printf("[%i]multiplos %d\n",numero1,b);
    //
    //
    //   }
    //       for(i=0;i<mmc;i++){
    //         h=h+numero2;
    //          printf("[%i]multiplos %d\n",numero2,h);
    //
    //
    //
    //
    //
    //
     }
  }
    else{



    }




	return 0;
}
