#include <conio.h>
#include <stdio.h>
#include <complex.h>

int main ()
{
	int i1, r1, i2, r2;
	printf ("Digite a parte real e imaginaria do primeiro numero: ");
	scanf ("%d", r1);
	scanf ("%d", i1);
	printf ("Digite a parte real e imaginaria do segundo numero: ");
	scanf ("%d", r2);
	scanf ("%d", i2);
	double complex z1 = (r1 + i1 + I);
	double complex z2 = (r2 + i2 + I);
	printf("Resultado = %lf + %lf.\n", creal(z1*z2), cimag(z1*z2));
	system ("pause");
	getche();
	return 0;
}
