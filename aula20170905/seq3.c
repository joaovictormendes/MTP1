#include <iostream>
#include <stdio.h>
using namespace std;

void main ()
{
	float a,b,c,d,e,media;
	printf ("Digite a primeira nota: \n")
	scanf ("%f", &a);
	printf ("Digite a segunda nota: \n")
	scanf ("%f", &b);
	printf ("Digite a terceira nota: \n")
	scanf ("%f", &c);
	printf ("Digite a quarta nota: \n")
	scanf ("%f", &d);
	printf ("Digite a quinta nota: \n")
	scanf ("%f", &e);
	media = (a+b+c+d+e)/14;
	printf ("A media das notas sera: %f", media);
	return 0;
}
