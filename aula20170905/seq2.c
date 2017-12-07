#include <stdio.h>
#include <conio.h>

int main ()
{
	float b,h, area;
	printf ("Digite a base do paralelogramo: \n")
	scanf ("%f", &b);
	printf ("Digite a altura do paralelogramo: \n")
	scanf ("%f", &h);
	area = b*h;
	printf ("A area do paralelogramo sera: %f", area);
	getche ();
	return 0;
}
