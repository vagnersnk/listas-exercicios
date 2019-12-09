#include <stdio.h>


#define MAX 30



int main() {
    int idades[MAX],i,j,idademaior,alturamenor,indexida,indexaltu;
    float altura[MAX];

    printf("-- INSIRA AS IDADES:\n");
    for(i=0;i<MAX;i++){
               printf(">> [%d]",i);
               scanf("%d",&idades[i]);
    }
    printf("\n-- INSIRA AS ALTURAS:\n");
    for(j=0;j<MAX;j++){
        printf(">> [%d]",j);
        scanf("%f",&altura[j]);
    }

    idademaior = idades[0];
    indexida=0;
    for(i=1;i<MAX;i++){
       if(idades[i]>idademaior){
           idademaior = idades[i];
           indexida = i;
       }

    }
    alturamenor = altura[0];
    indexaltu=0;
    for(j=1;j<MAX;j++){
        if(altura[j] < alturamenor){
            alturamenor = altura[j];
            indexaltu = j;
        }

    }
    printf("\n>> RESULTADOS:\n");
    printf("a) maior idade = %d\n",idademaior);
    printf("b) menor altura = %f\n",alturamenor);
    printf("c) altura pessoa mais velha = %2.f2\n",altura[indexida]);
    printf("d) idade da pessoa mais baixa = %d\n",idades[indexaltu]);







    return 0;
}