/*Faça um programa que imprima os 20 primeiros itens da sequência de Fibonacci. 
Sequência: 0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/

#include <stdio.h>

int main(void)
{
	int n1 = 0, n2 = 1, n3 = 0, i;

	for (i = 1; i < 20; i++){
		if (i == 1){
			printf("%d, ", n1);
			_sleep(500);
			printf("%d, ", n2);
			_sleep(500);
		}else{
			n3 = n1 + n2;
			if (i != 19){
				printf("%d, ", n3);
			}
			else
			{
				printf("%d", n3);
			}
			_sleep(500);
			n1 = n2;
			n2 = n3;
		}

	}
	return 0;
	system("pause");
}
