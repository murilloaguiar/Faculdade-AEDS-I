/*Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na 
matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    char matriz[5][5];
    int i=0,j,cont=0,c=0,l=0;

    printf("MATRIZ 5X5: \n");
    for(i;i<5;i++){
        for(j=0;j<5;j++){
            setbuf(stdin,NULL);
            scanf("%c", &matriz[i][j]);
            if(matriz[i][j]=='x' || matriz[i][j]=='X'){
                l=i;
                c=j;
                cont++;
            }
        }
    }
    j=0;
    for(i=0;i<5;i++){
        printf("[%c][%c][%c][%c][%c]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3],matriz[i][j+4]);
    }

    if (cont==0){
        printf("VALOR N�O ENCONTRADO\n");
    }else{
        printf("O valor X est� na linha %d e coluna %d\n",l,c);
    }

    system("pause");
    return 0;


}
