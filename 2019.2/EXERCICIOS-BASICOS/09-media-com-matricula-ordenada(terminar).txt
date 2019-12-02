#include <stdio.h>

//alunos
#define LIN 2
//notas :COL 0 MATRICULAS
#define COL 3



int main() {
    //media[0][1] 0-matricula 1-media
    int lista[LIN][COL],i,j,soma=0,valor=0,medias[LIN][2],aux;
    printf(">> INSIRA OS DADOS NA [n][0] na coluna 0 coloque a matricula:\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&lista[i][j]);

        }
    }

    //printar lista
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d]\t",lista[i][j]);

        }
        printf("\n");
    }



    for(i=0;i<LIN;i++){
        for(j=1;j<COL;j++){
            soma += lista[i][j];
        }
        valor= soma/4;
        medias[i][1]= valor;
        medias[i][0]=lista[i][0];
        soma =0;




    }
    for(i=0;i<LIN-1;i++){
        for(j=i+1;j<LIN;j++){
            if(medias[i]>medias[j]){
                aux = medias[j];
                medias[j][0] = medias[i];
                medias[i][0] = aux;

                aux = medias[j];
                medias[j][1] = medias[i];
                medias[i][1] = aux;
            }
        }


    }


    for(i=0;i<LIN;i++){
        printf("Matricula :%d media =%d\n",medias[i][0],medias[i][1]);

    }









    return 0;
}