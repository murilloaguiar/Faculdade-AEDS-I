/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[3][3],soma=0,i=0,j=0;

    printf("Matriz 3X3: ");
    for(i;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
             if (i==j){
                soma+=matriz[i][j];
            }
        }
    }

    j=0;
    printf("Matriz: \n");
    for(i=0;i<3;i++){
        printf("[%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2]);
    }
    printf("A soma da diagonal principal e: %d.\n",soma);

    system("pause");
    return 0;
}


