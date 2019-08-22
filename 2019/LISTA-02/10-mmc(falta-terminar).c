#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1,num2,mmc;
    printf("Digite dois valores\n");

    scanf("%d%d",&num1,&num2);
    if (num2>num1) {
        if ((num2 % num1 == 0)) {
            mmc = num2;
            printf("O mmc entre: (%d) e (%d) foi o numero : %d  ", num1, num2, mmc);
        }
    }
    else if ((num1%num2 == 0)){
            mmc = num1;
            printf("O mmc entre: (%d) e (%d) foi o numero : %d  ",num1,num2,mmc);
    } else if(num1 == num2){
        mmc = num1;
        printf("O mmc entre: (%d) e (%d) foi o numero : %d  ",num1,num2,mmc);
    }
    else{
            printf("iniciando calculo");
    }






    
	
	return 0;
}

