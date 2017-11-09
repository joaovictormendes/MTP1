#include <stdio.h>
#include <math.h>
#include <conio.h>

int numerador (int num1, int num2, int den1, int den2)
{
	int numr;
	numr = (den2*num1) + (den1*num2);
	return numr;
}

int denominador (int den1, int den2)
{
	int denr;
	denr = (den1*den2);
	return denr;
}

int main()
{
	int num1, num2, den1, den2, numresult, denresult;
	printf ("Digite o primeiro numerador: ");
	scanf ("%d", &num1);
	printf ("\nDigite o primeiro denominador: ");
	scanf ("%d", &den1);
	printf ("\nDigite o segundo numerador: ");
	scanf ("%d", &num2);
	printf ("\nDigite o segundo denominador: ");
	scanf ("%d", &den2);
	if (den1 == 0 || den2 == 0)
	{
		printf ("\nERRO! Denominador invalido! Tente novamente.");
		getche ();
		return 0;
	}
	numresult = numerador(num1, num2, den1, den2);
	denresult = denominador(den1, den2);
	printf ("\nO resultado sera %d/%d.", numresult, denresult);
	getche ();
	return 0;
}