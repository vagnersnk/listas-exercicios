#include <stdio.h>

#define LIN 2
#define COL 4



int main() {
    char respostas[LIN][COL],gabarito[COL];
    int resultados[LIN],i,j,pontos;

    //LER RESPOSTA
    printf("\n>> INSIRA AS RESPOSTAS DOS ALUNOS\n");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf(">> [%d][%d]",i,j);
            scanf("%s",&respostas[i][j]);
        }
    }
    //LER GABARITO
    printf("\n>> INSIRA O GABARITO DAS %d QUESTOES:\n",COL);
    for(i=0;i<COL;i++){
            printf(">> [%d]",i);
            scanf("%s",&gabarito[i]);
    }


    //VERIFICAR RESPOSTAS
    pontos =0;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            if(respostas[i][j] == gabarito[j]){
                pontos++;
            }
        }
        resultados[i] = pontos;
        pontos =0;


    }
    printf("\n>> RESULTADOS\n");
    for(i=0;i<LIN;i++){
        printf("aluno %d = %d\n",i,resultados[i]);

    }





    return 0;
}