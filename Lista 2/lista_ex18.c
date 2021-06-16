/*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a 
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4],soma=0,i=0,j=0;

    printf("Matriz 4X4: ");
    for(i;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
            while (matriz[i][j]<0 || matriz[i][j]>20){
                printf("DIGITE UM VALOR ENTRE 0 E 20\n");
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    j=0;
    printf("Matriz: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i<j){
                matriz[i][j]=0;
            }
        }
    }
    j=0;
    printf("Matriz nova: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }
    system("pause");
    return 0;
}



