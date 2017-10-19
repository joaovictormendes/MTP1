#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main ()
{
	float ladob, ladoc, angulo, var1, result;
	printf ("Digite o lado b do triangulo: ");
	scanf ("%f", &ladob);
	printf ("\nDigite o lado c do triangulo: ");
	scanf ("%f", &ladoc);
	printf ("\nDigite o angulo formado entre eles (em radianos): ");
	scanf ("%f", &angulo);
	var1 = pow(ladob, 2) + pow(ladoc, 2);
	result = sqrt(var1 - 2 * ladob * ladoc * cos(angulo));
	printf ("\nO outro lado do triangulo sera: %f.\n", result);
	system ("pause");
	return 0;
}