#include <iostream>
#include <stdio.h>
using namespace std;

void main ();
{
	int num;
	printf("Digite o numero desejado: ");
	scanf("%d", &num);
	if (num%2 == 0)
	{
		if (num%3 == 0)
		{
			if (num%7 == 0)
			printf("\nO numero e par e multiplo de 3 e 7!\n");
			else
			printf("\nO numero e par e multiplo de 3!\n");
		}
		else
			if (num%7 == 0)
			printf("\nO numero e par e multiplo de 7!\n");
			else
			printf("\nO numero e par!\n");
	}
	if (num%2 != 0)
	{
		if (num%5 == 0)
		printf("\nO numero e impar e multiplo de 5!\n");
		else
		printf("\nO numero e impar!\n");
	}
	return 0;
}