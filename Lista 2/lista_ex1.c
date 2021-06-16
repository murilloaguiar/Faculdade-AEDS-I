/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int vetor[6], i=0;

    for (i;i<6;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i=0;i<6;i++){
        printf("O valor na posicao %d e %d\n",i+1,vetor[i]);
    }

    system("pause");
    return 0;
}
