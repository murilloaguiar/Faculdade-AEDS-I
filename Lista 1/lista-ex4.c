/*Um aluno do Curso de Engenharia da Unimontes deseja ir ao FEPEG 2019. 
Crie um algoritmo que leia duas informações:

    1 - O alunto tem dinheiro para a viagem (verdadeiro ou falso) e
    2 - Os pais deixam participar do evento (verdadeiro ou falso)

Exiba como resposta se o aluno irá à FEPEG ou não
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main (void){
    bool d = false, p = false;
    char r;

    printf("O aluno tem dinheiro?('S' para sim e 'N' para nao)\n");
    setbuf(stdin, NULL);
    scanf("%c", &r);
    setbuf(stdin, NULL);
    if (r=='s' || r=='S'){
        d=true;
    }

    printf("O aluno tem permissao dos pais?('S' para sim e 'N' para nao)\n");
    setbuf(stdin, NULL);
    scanf("%c", &r);
    setbuf(stdin, NULL);
    if (r=='s' || r=='S'){
        p=true;
    }

    if(d==true && p==true){
        printf("O aluno pode ir\n");
    }else{
        printf("O aluno nao pode ir\n");
    }
    system("pause");
    return 0;
}
