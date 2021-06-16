/*Em uma turma há 10 alunos. Cada aluno tem 2 notas.
Um professor precisa calcular a média das duas notas de cada aluno.
Crie um programa que resolve este problema.*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    int i=1,x=1;
    float nota,soma=0;

    for(i;i<=10;i++){
        for(x;x<=2;x++){
            printf("%d aluno, %d nota\t",i,x);
            scanf("%f",&nota);
            soma+=nota;
        }
        x=1;
        printf("A media do %d aluno e %.2f\n\n",i, soma/2);
        soma=0;
    }

    return 0;
    system("pause");
}

