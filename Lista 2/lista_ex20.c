/*Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d).
Cada questão vale um ponto. Primeiro solicite ao usuário que digite o gabarito, depois
peça para digitar as respostas dos alunos. Calcule e escreva: A nota do aluno 
e se ele foi aprovado (média 7).
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    char gabarito[10],resposta;
    int i=0,cont=0;

    printf("-----GABARITO-----\n");
    for(i;i<10;i++){
        printf("ALTERNATIVA QUESTAO %d\n",i+1);
        setbuf(stdin,NULL);
        scanf("%c", &gabarito[i]);
    }

    printf("-----CORRECAO-----\n");
    for(i=0;i<10;i++){
        printf("Digite a resposta para a questao %d:\n",i+1);
        setbuf(stdin,NULL);
        scanf("%c",&resposta);
        if (resposta==gabarito[i]){
            cont++;
        }
    }

    printf("A nota do aluno foi %d.\n",cont);
    if (cont>=7){
        printf("ALUNO APROVADO\n");
    }else{
        printf("ALUNO REPROVADO\n");
    }
    system("pause");
    return 0;


}

