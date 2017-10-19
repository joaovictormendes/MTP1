#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
	double n, b, deno, numer, x;
	printf ("Digite o numero e a base desejada: \n");
	scanf ("%lf", &n);
	scanf ("%lf", &b);
	numer = log10(n);
	deno = log10(b);
	x = numer/deno;
	printf("\nResultado = %lf.\n", x);
	system ("pause");
	return 0;
}