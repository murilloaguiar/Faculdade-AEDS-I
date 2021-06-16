/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4],matriz1[4][4],result[4][4],i=0,j=0;

    printf("Primeira matriz(4x4): ");
    for(i;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Segunda matriz(4x4): ");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]>matriz1[i][j]){
                result[i][j]=matriz[i][j];
            }else if(matriz1[i][j]>matriz[i][j]){
                result[i][j]=matriz1[i][j];
            }else{
                result[i][j]=matriz[i][j];
            }
        }
    }

    j=0;
    printf("Primeira matriz: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }
    printf("Segunda matriz: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }
    printf("Matriz Resultante: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }

    system("pause");
    return 0;
}

