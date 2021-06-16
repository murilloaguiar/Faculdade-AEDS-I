/*Fazer um programa para ler 5 valores e em seguida, mostrar a posição onde se entram o maior e o menor valor.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int numeros [10],i=0,menor=0,maior=0,cont1=0,cont=0;

    printf("DIGITE 10 NUMEROS: \n");
    for (i;i<=9;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%d", &numeros[i]);
    }

    menor=numeros[0];
    maior=numeros[0];

     for (i=1;i<=9;i++){
        if(numeros[i]>maior){
            maior=numeros[i];
            cont1++;
        }else if (numeros[i]<menor){
            menor=numeros[i];
            cont++;
        }
    }

    printf("O maior numero e: %d e ele se encontra na %d posicao\n",maior,cont1);
    printf("O menor numero e: %d e ele se encontra na %d posicao\n",menor,cont);

    system("pause");
    return 0;
}
