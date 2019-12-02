#include <stdio.h>

#define LIN 5
#define COL 5



int main() {
    int matrix[LIN][COL],i,j;

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            if(i<j){
                matrix[i][j]= ((2*i)+ (7*j))-2;
            }
            if(i = j){
                matrix[i][j]= (3*i)-1;
            }
            if(i>j){
                matrix[i][j]= ((4*i)- (5*j*2));
            }
        }
    }

    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("[%d]\t",matrix[i][j]);

        }
        printf("\n");
    }

    return 0;
}
