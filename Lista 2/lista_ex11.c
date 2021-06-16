/*Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro.
Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2,
mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2 escreva uma mensagem
informando que o código e inválido.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float numeros [5];
    int i=0, opc;

    printf("DIGITE 5 NUMEROS: \n");
    for (i;i<=4;i++){
        printf("Digite o %d valor:\t", i+1);
        scanf("%f", &numeros[i]);
    }
    printf("DIGITE UMA OPCAO\n");
    scanf("%d",&opc);

    switch (opc){
        case 0:
            break;
        case 1:
            for (i=0;i<=4;i++){
                printf("%.2f ", numeros[i]);
            }
        case 2:
             for (i=4;i>=0;i--){
                printf("%.2f ", numeros[i]);
            }
        default:
            printf("Opcao invalida\n s");
            break;
    }


    system("pause");
    return 0;
}
