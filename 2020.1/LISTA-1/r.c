#include <stdio.h>
#include <stdlib.h>



int main() {
    float a,b,c,n,br,total;
    printf("insira os votos dos candidatos: A, B, C ,Nulos e Brancos:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&n,&br);
    total = a+b+c+n+br;
    printf("--TOTAL DE VOTOS: %f--\n\n",total);
    printf("Candidato A = %f\nCandidato B = %f\nCandidato C = %f\nNulos = %f\nBranco = %f\n",(a*100)/total,(b*100)/total,(c*100)/total,(n*100)/total,(br*100)/total);
    
    
        
	
	return 0;
}