#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exibir_canditados();

int main()
 {
 	int quest=1,voto=0,naruto=0,goku=0,tanjiro=0,saitama=0,nulo=0,branco=0,percnulo=0,percbranco=0;
 	
 	do{
 		printf("__OPCOES__\n0-PARA SAIR\n1- Naruto\n2- Goku\n3-Tanjiro\n4-Saitama\n5-Nulo\n6-Branco\n\n");
 		scanf("%d",&quest);
 		system("cls || clear");
 		switch(quest){
 			case 1:
 			  printf("voto computado\n");
 			  naruto++;
 			  voto++;
 			  break;
 			case 2:
 			  printf("voto computado\n");
 			  goku++;
 			  voto++;
 			  break;
			case 3:
 			  printf("voto computado\n");
 			  tanjiro++;
 			  voto++;
 			  break;  
			case 4:
 			  printf("voto computado\n");
 			  saitama++;
 			  voto++;
 			  break;  
 			case 5:
 			  nulo++;
 			  voto++;
 			  break;
 			case 6:
 			  branco++;
 			  voto++;
 			  break;
			
				   	
		 }
		 
	 }while(quest);
	 percnulo= (nulo*100)/voto;
	 percbranco = (branco*100)/voto;
	 printf("total de votos: %d\nNaruto:%d\nGoku:%d\nTanjiro:%d\nSaitama:%d\nNulos:%d\nBrancos:%d\nPercentual nulo: %d%% \nPercentual Branco: %d%%",voto,naruto,goku,tanjiro,saitama,nulo,branco,percnulo,percbranco);
 	
 		

 
			
 return 0;
}

