/*Faça um programa que receba do usuário um vetor com 10 posições. 
Em seguida deverá ser impresso o maior e o menor elemento do vetor*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeros [10],i=0,menor=0,maior=0;

    for (i;i<=9;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%d", &numeros[i]);
    }

    menor=numeros[0];
    maior=numeros[0];

     for (i=1;i<=9;i++){
        if(numeros[i]>maior){
            maior=numeros[i];
        }else if (numeros[i]<menor){
            menor=numeros[i];
        }
    }

    printf("O maior numero e: %d\n",maior);
    printf("O menor numero e: %d\n",menor);

    system("pause");
    return 0;


}
