/*Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){

    char vetor[10];
    int i=0,j=0,x=0;

        scanf("%s",&vetor);
        printf("%s\n",vetor);
        setbuf(stdin, NULL);
        for(i=9;i>=0;i--){
           setbuf(stdin, NULL);
           printf("%c", vetor[i]);
        }
        printf("\n");

    system("pause");
    return 0;
}
