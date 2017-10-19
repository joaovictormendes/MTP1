#include <iostream>
#include <stdio.h>
using namespace std;

void main ();
{
	int base, pot;
	printf("Digite o numero que sera a base: ");
	scanf("%d", &base);
	printf("\nDigite o numero que sera a potencia: ");
	scanf("%d", &pot);
	for (int i = 1; i <= pot; i++)
	{
		base =  base * base;
	}
	printf("\nResultado: %d\n", base);
	return 0;
}