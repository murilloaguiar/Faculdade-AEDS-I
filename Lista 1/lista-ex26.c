/*Informe se um número digitado é primo. Caso não for, informe por quais números ele é divisível;*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    int i=1, x, cont=0;

    printf("Digite um numero:\t");
    scanf("%d",&x);

    for(i;i<=x;i++){
        if(x%i==0){
            printf("O numero e divisivel por: %d\n",i);
            cont++;
        }
    }
   if(cont==2){
        printf("O numero e primo.\n");
   }else{
        printf("O numero nao e primo.");
   }



    return 0;
    system("pause");
}
