#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main ()
{
	int num; 
	float result1 = 0, inversao;
	double result2 = 0;
	printf("Digite o numero desejado: ");
	scanf("%d", &num);
	inversao = 1.0/num;
	printf ("%f", inversao);
	for (int i = 0; i <= 729; i++)
	{
		result1 = inversao + result1;
	}
	for (int i = 0; i <= 729; i++)
	{
		result2 = inversao + result2;
	}
	printf ("\nResultado em float: %.15f.", result1);
	printf ("\nResultado em double: %f.\n", result2);
	system ("pause");
	return 0;
}