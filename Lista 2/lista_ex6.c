/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeros [10],i=0,maior=0,cont=0;

    for (i;i<=9;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%d", &numeros[i]);
    }

    maior=numeros[0];

     for (i=1;i<=9;i++){
        if(numeros[i]>maior){
            maior=numeros[i];
            cont++;
        }
    }

    printf("O maior numero e: %d e ele se encontra na posicao %d\n",maior,cont);

    system("pause");
    return 0;


}
