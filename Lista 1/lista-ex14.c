/*Escrever um algoritmo que imprima a tabuada de um número informado pelo usuário*/
#include<stdio.h>
#include<stdlib.h>


int main (void){
    int i=0;
    float a;

    printf("Digite um numero\n");
    scanf("%f",&a);

    for(i;i<=10;i++){
        printf("%.2f X %d = %.2f\n",a,i,a*i);
    }

return 0;
system("pause");
}

