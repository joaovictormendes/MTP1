#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main ()
{
	srand(time(0));
	float num, num2, var;
	printf ("Digite o numero inteiro e positivo: \n");
	scanf ("%f", &num);
	if (num <0)
	{
		printf ("Nao e possivel executar a opercao!\n");
		break;
	}
	var = rand()%10;
	num2 = num + var;
	if (num2%2 == 0)
	{
		printf ("O numero escolhido foi %f!\n", num);
		printf ("O numero sorteado foi %f!\n", var)
		printf ("A soma resultou em um numero par!\n")
	}
	else
	{
		printf ("O numero escolhido foi %f!\n", num);
		printf ("O numero sorteado foi %f. \n", var)
		printf ("A soma resultou em um numero impar!\n")
	}
	return 0;
}
