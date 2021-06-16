/*Escreva um algoritmo que leia valores inteiros e encontre o maior e o menor deles. 
Termine a leitura se o usuário digitar zero (0);*/

#include<stdio.h>
#include<stdlib.h>

int main (void){
    int a=1,maior=0,menor=0;

    printf("O programa so se encerrara quando digitar 0\n");
    while (a!=0){
        printf("Digite um numero:\t");
        scanf("%d", &a);

        if (a>maior)
            maior=a;
        else if(a<menor)
            menor=a;
        else
            a=a;
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d", menor);

    return 0;
    system("pause");
}

