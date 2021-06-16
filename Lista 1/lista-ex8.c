/*Implemente um código que receba três números inteiros e 
retorne uma destas três mensagens:

    1 - Os três valores são iguais
    2 - Não há valores iguais; ou
    3 - Há dois valores iguais e um diferente.
*/


#include<stdio.h>
#include<stdlib.h>


int main (void){
    int a,b,c;

    printf("Digite tres numeros inteiros\n");
    scanf("%d %d %d",&a, &b, &c);

    if(a==b && a==c && b==c){
        printf("Todos valores sao iguais");
    }else if(a==c){
        printf("Ha dois valores iguais");
    }else if(b==c){
        printf("Ha dois valores iguais");
    }else if(a==b){
        printf("Ha dois valores iguais");
    }else{
        printf("Todos valores sao diferentes");
    }

return 0;
system("pause");
}
