/*Escreva um programa que leia dois valores reais. Ambos valores deverão 
ser lidos até que o usuário digite um número no intervalo de 1 a 100.
Apresentar a soma dos dois valores lidos.*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    float a,b,soma=0;

    printf("O programa so se encerrara quando digitar um numero entre 1 e 100\n");
    while (a<1 || a>100 || b<1 || b>100){
        printf("Digite dois numeros\n");
        scanf("%f %f",&a, &b);
        soma+=a+b;
        printf("Soma dos numeros: %.2f\n", soma);
        soma=0;
    }

    return 0;
    system("pause");
}
