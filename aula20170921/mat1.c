#include <conio.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	double x1, y1, x2, y2, var1, var2, result;
	printf ("Digite as coordenadas do primeiro ponto: ");
	scanf ("%lf", &x1);
	scanf ("%lf", &y1);
	printf ("\nDigite as coordenadas do segundo ponto: ");
	scanf ("%lf", &x2);
	scanf ("%lf", &y2);
	var1 = x2 - x1;
	var1 = pow(var1, 2);
	var2 = y2 - y1;
	var2 = pow(var2, 2);
	result = var1 + var2;
	result = sqrt(result);
	printf ("\nAs distancias entre os pontos sera: %lf.\n", result);
	system ("pause");
	getche();
	return 0;
}
