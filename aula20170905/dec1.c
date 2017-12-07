#include <iostream>
#include <stdio.h>

int main ()
{
	float num;
	printf ("Digite o numero: \n")
	scanf ("%f", &num);
	if (num%2 == 0)
	printf("O numero e par!\n")
	if (num%2 == 1)
	printf ("O numero e impar!\n")
	if (num%3 == 0)
	printf ("O numero e multiplo de 3!\n")
	if (num%5 == 0)
	printf ("O numero e multiplo de 5!\n")
	if (num%7 == 0)
	printf ("O numero e multiplo de 7!\n")
	return 0;
}
