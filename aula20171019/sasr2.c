#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void par()
{
	int num = 20, i;
	printf ("Os numeros pares entre 1 e 20 sao: ");
	for (i = 1; i <= num; i++)
	{
		if (i%2 == 0)
			printf ("%d ", i);
	}
}

void impar()
{
	int num = 20, i;
	printf ("Os numeros impares entre 1 e 20 sao: ");
	for (i = 1; i <= num; i++)
	{
		if (i%2 != 0)
			printf ("%d ", i);
	}
}

int main ()
{
	int n;
	printf ("Digite 1 para mostrar os numeros impares e 2 para mostrar os pares: ");
	scanf ("%d", &n);
	if (n == 1)
		par();
	else
		if (n==2)
			impar();
		else
			printf ("\nComando invalido!\n");
	getche();
	return 0;
}
