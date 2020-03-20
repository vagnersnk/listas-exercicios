#include <stdio.h>


int main() {
	int vetor[4][4],i,j,k=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
				printf("insira o elemento [%d][%d]",i,j);
				scanf("%d",&vetor[i][j]);
		}
	
	}	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(i != j){
			if(vetor[i][j] ==0){
				k++;
			}
		}
		}
		
	}
		
	if(k == 12){
		printf("matriz diagonal");
	}
	else{
		printf("nao e matriz diagonal");
	}


		
	
	



    return 0;
}