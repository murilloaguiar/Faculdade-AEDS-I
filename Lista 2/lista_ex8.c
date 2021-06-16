/*Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a 
quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float numeros [10],cont=0;
    int i=0,j=0;
    printf("DIGITE 10 NUMEROS: \n");
    for (i;i<=9;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%f", &numeros[i]);
        if (numeros[i]<0){
            cont++;
        }
    }
    printf("A quantidade de numeros negativos que existem sao: %.2f\n",cont);
    printf("E os numeros negativos que existem sao:");
    cont=0;
    for (j;j<=9;j++){
        if (numeros[j]<0){
            printf("\n%.2f",numeros[j]);
        }else{
            cont+=numeros[j];
        }
    }
    printf("\nE a soma dos numeros positivos que existem e: %.2f\n", cont);

    system("pause");
    return 0;
}
