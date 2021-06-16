/*Leia uma matriz 4 x 4, imprima a matriz e retorne à localização (linha e a coluna) do maior valor.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4],i=0,j=0,maior=0,c=0,l=0;

    printf("MATRIZ 4X4: \n");
    for(i;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maior=matriz[0][0];

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
                l=i;
                c=j;
            }
        }
    }
    j=0;
    printf("MATRIZ: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }
    printf("O maior numero e %d e ele se encontra na linha %d e coluna %d. \n",maior,l,c);
    system("pause");
    return 0;
}

