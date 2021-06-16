/*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4],i=0,j=0,cont=0;

    printf("MATRIZ 4X4: \n");
    for(i;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j]>10){
                cont++;
            }
        }
    }
    j=0;
    printf("MATRIZ: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }
    printf("A quantidade de numeros maiores que 10 sao: %d\n",cont);

    system("pause");
    return 0;


}
