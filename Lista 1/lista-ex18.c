/*17 - Escrever um programa de computador que leia 10 números 
inteiros e, ao final, apresente a soma de todos os números lidos;*/

/*18- Faça o mesmo que antes, porém, ao invés de ler 10 números, 
o programa deverá ler e somar números até que o valor digitado seja zero ( 0 ).*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    float a=1,soma=0;

    printf("O programa so se encerrara quando digitar 0\n");
    while (a!=0){
        printf("Digite um numero\n");
        scanf("%f",&a);
        soma+=a;
    }
    printf("Soma dos numeros: %.2f", soma);
    return 0;
    system("pause");
}
