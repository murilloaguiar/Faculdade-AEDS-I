/*Calcule a soma de todos os números primos existentes entre 1 e 100;*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    int i=2,cont=0,x=1,soma=0;

    for(i;i<=100;i++){
        for(x;x<=i;x++){
            if(i%x==0)
                cont++;
        }
        if(cont==2){
            printf("%d\n",i);
            soma+=i;
        }
        cont=0;
        x=1;
    }
    printf("A soma dos numeros primos entre 1 e 100 e:\t%d", soma);
}
