/*Implemente um código que leia o Raio de um circulo e calcule a área
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float raio, area=0;
    printf("Digite o raio de uma circunferencia: \n");
    scanf("%f", &raio);

    area = M_PI * (pow(raio,2));

    printf("Area da circunferencia: %.2f \n", area);

    system("pause");
    return 0;
}
