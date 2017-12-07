#include <stdio.h>
#include <conio.h>

int main ()
{
	int l, area;
	printf ("Digite o lado do quadrado: \n")
	scanf ("%d", &l);
	area = l*l;
	printf ("A area do quadrado sera: %d", area);
	getche ();
	return 0;
}
