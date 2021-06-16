/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
dos componentes deste vetor, armazenando o resultado em outro vetor. 
Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    float vetor[10], result[10];
    int i=0,j=0,x=0;

    for (i;i<10;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%f", &vetor[i]);
        result[i]=pow(vetor[i],2);

    }
    for(j;j<10;j++){
        printf("Quadrado de %.2f e %.2f\n",vetor[j],result[j]);
    }

    system("pause");
    return 0;
}
