#include <stdio.h>

//anos
#define LIN 2
//meses
#define COL 2



int main() {
    int lista[LIN][COL],i,j,sanos,smeses,maiorano,maiormes;
    float medanos[COL],medmeses[LIN];
    int consuano[LIN],consumes[COL];
    printf(">> INSIRA OS DADOS [A][M]:  anos-meses:\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&lista[i][j]);

        }
    }

    //printar lista
    printf(">> EXIBINDO\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d]\t",lista[i][j]);

        }
        printf("\n");
    }

    //media anos
    sanos = 0;
    maiorano= lista[0][0];
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            sanos += lista[i][j];
            if(lista[i][j] > maiorano){
                maiorano = lista[i][j];
            }
        }
        consuano[i] = maiorano;
        medanos[i] = (float)sanos/LIN;
        maiorano = 0;
        sanos= 0;


    }
    //media meses
    smeses = 0;
    maiormes= lista[0][0];
    for(j=0;j<COL;j++){
        for(i=0;i<LIN;i++){
            smeses += lista[i][j];
            if(lista[i][j] > maiormes){
                maiormes = lista[i][j];
            }
        }
        consumes[j] = maiormes;
        medmeses[j] = (float)smeses/COL;
        maiorano = 0;
        smeses= 0;


    }

    printf("\n>> EXIBINDO MEDIAS ANOS\n");
    for(i=0;i<LIN;i++){
            printf("[%2.f]\t",medanos[i]);
    }
    printf("\n>> EXIBINDO MEDIAS MESES\n");
    for(j=0;j<COL;j++){
        printf("[%2.f]\t",medmeses[j]);
    }
    printf("\n>> EXIBINDO MES MAIOR CONSUMO\n");
    for(j=0;j<COL;j++){
        printf("[%d]\t",consumes[j]);
    }
    printf("\n>> EXIBINDO ANO MAIOR CONSUMO\n");
    for(i=0;i<LIN;i++){
        printf("[%d]\t",consuano[i]);
    }
    

    return 0;
}