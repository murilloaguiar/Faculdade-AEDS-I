/*Crie um programa em C que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro: 

    1 - Primeira coluna: numero de matricula (use um inteiro);
    2 - Segunda coluna: média das provas;
    3 - Terceira coluna: media dos trabalhos;
    4 - Quarta coluna: nota final.

Elabore um programa que:

    A - Leia as três primeiras informações de cada aluno;
    B. Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos;
    C. Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe uma maior nota);
    D. Imprima a média aritmética das notas finais.

*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int matriz[4][4],i=0,j=0,mp[4],mt[4],soma=0,cont=0,maior=0;

    for(i;i<4;i++){
        printf("Matricula do aluno %d: ",i+1);
        scanf("%d", &matriz[0][i]);
    }

    for(i=0;i<4;i++){
        printf("Media das provas do aluno %d: ",i+1);
        scanf("%d", &matriz[1][i]);
        mp[i]=matriz[1][i];
    }

    for(i=0;i<4;i++){
        printf("Media dos trabalhos do aluno %d: ",i+1);
        scanf("%d", &matriz[2][i]);
        mt[i]=matriz[2][i];
    }

    for(i=0;i<4;i++){
        matriz[3][i]=mp[i]+mt[i];
    }
    maior=matriz[3][0];

    printf("Matriz: \n");
    for(i=0;i<4;i++){
        printf("[%d][%d][%d][%d]\n",matriz[i][j],matriz[i][j+1],matriz[i][j+2],matriz[i][j+3]);
    }

    for(i=0;i<4;i++){
        soma+=matriz[3][i];
        if (matriz[3][i]>maior){
            maior=matriz[3][i];
            cont++;
        }
    }
    printf("A maior media foi do aluno de matricula: %d\n",matriz[0][cont]);
    printf("A media das notas finais foram: %.2f\n",(float)soma/4);

    system("pause");
    return 0;
}


