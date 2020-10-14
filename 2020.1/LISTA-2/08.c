#include <stdio.h>
#include <stdlib.h>

int main()
 {
 int placa[4],i;
 char meses[12][20] ={ "Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","outubro","Novembro","Dezembro"};

 for(i=0;i<4;i++){
 	printf("insira o digito [%d] da placa \n",i+1);
 	scanf("%d",&placa[i]);
 }
 puts("mes renovar:");
 puts(meses[placa[3]-1]);
 return 0;

}