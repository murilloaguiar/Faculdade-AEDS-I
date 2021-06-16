/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeros [10],i=0,cont=0,j=0;

    printf("DIGITE 10 VALORES\n");
    for (i;i<=9;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%d", &numeros[i]);
        if (numeros[i]%2==0){
            cont++;
        }
    }
    printf("A quantidade de numeros pares que existem sao: %d\n",cont);
    printf("E os numeros pares que existem sao:");
    for (j;j<=9;j++){
        if (numeros[j]%2==0){
            printf("\n%d",numeros[j]);
        }
    }

    system("pause");
    return 0;

}
