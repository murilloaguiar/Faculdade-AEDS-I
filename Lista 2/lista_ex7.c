/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float notas [15],cont=0;
    int i=0;
    printf("DIGITE 15 NOTAS: \n");
    for (i;i<=14;i++){
        printf("Digite a %d nota:\t", i+1);
        scanf("%f", &notas[i]);
        cont+=notas[i];
    }
    printf("Media geral: %.2f\n",(float)cont/15);

    system("pause");
    return 0;
}
