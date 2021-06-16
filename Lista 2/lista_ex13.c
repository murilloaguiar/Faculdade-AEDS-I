/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[5][5],i=0,j=0;

    printf("MATRIZ 5X5: \n");
    for(i;i<5;i++){
        for(j=0;j<5;j++){
            if (i==j){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=0;
            }
        }
    }
    j=0;
    printf("MATRIZ: \n");
    for(i=0;i<5;i++){
        printf("[%d][%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3],matriz[i][j+4]);
    }

    system("pause");
    return 0;


}
