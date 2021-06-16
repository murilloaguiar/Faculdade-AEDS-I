/*Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=0,j=0,numeros [10];

    printf("DIGITE 10 NUMEROS: \n");
    for (i;i<=9;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%d", &numeros[i]);
        if (numeros[i]<0){
            numeros[i]=0;
        }
    }
    printf("O novo vetor sera: ");
    for (j;j<=9;j++){
       printf("%d , ",numeros[j]);
    }

    system("pause");
    return 0;
}
