/*Escreva um programa que leia um valor correspondente ao número de jogadores
de um time de vôlei. O programa deverá ler uma altura para cada um dos jogadores
, ao final, informar a altura média do time.*/

#include<stdio.h>
#include<stdlib.h>


int main (void){
    int i=1,j;
    float altura,soma=0;

    printf("Digiite a quantidade de jogadores no time:\t");
    scanf("%d", &j);

    for(i;i<=j;i++){
        printf("Altura do %d atleta em cm:\t",i);
        scanf("%f",&altura);
        soma+=altura;
    }
    printf("A media de altura do time e %.2fm\n\n",((soma/j)/100));


    return 0;
    system("pause");
}
