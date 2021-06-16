/*Faça um algoritmo que leia um número e diga se este número 
está no intervalo entre 100 e 200.*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    float x;

    printf("Digite um numero\t");
    scanf("%f", &x);

    if(x>100 && x<200){
        printf("%.2f esta entre 100 e 200.\n", x);
    }else{
        printf("%.2f nao esta entre 100 e 200.\n", x);
    }

    system("pause");
    return 0;

}
