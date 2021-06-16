/*Ler 4 notas de um aluno. Fazer a média e informar “Aprovado” caso seja maior 
ou igual a 7. Caso seja menor que 7, deve-se solicitar a nota da avaliação de 
recuperação e fazer média novamente.*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    float nota,soma=0,n3,n4;
    int i=1,x=1;

    for(i;i<=4;i++){
        printf("Digite o valor da %d prova:\t",i);
        scanf("%f", &nota);
        while (nota>10){
            printf("Digite um valor entre 0 e 10 para a prova %d\t",i);
            scanf("%f", &nota);
        }
        soma+=nota;
    }

    if((soma/4)<7){
        printf("O aluno foi pra recuperacao.\n");
        for(x;x<=4;x++){
            printf("Digite o valor da %d prova de recuperacao:\t",x);
            scanf("%f", &nota);
            while (nota>10){
                printf("Digite um valor entre 0 e 10 para a %d prova de recuperacao:\t",x);
                scanf("%f", &nota);
            }
        soma+=nota;
        }
        if((soma/4)<7)
           printf("REPROVADO\n");
        else
            printf("APROVADO\n");
    }else{
        printf("APROVADO\n");
    }

return 0;
system("pause");
}
