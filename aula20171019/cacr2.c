#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float raizes (int a, int b, int c)
{
	float delta;
	delta = (b*b) - (4*a*c);
	return delta;
}

void raiz_posi (float delta, int a, int b,int c)
{
	float raiz1, raiz2;
	raiz1 = (-b+sqrt(delta))/(2*a);
	raiz2 = (-b-sqrt(delta))/(2*a);
	printf ("\nA raiz 1 sera: %f", raiz1);
	printf ("\nA raiz 2 sera: %f", raiz2);
	getch();
}

void raiz_zero(int a, int b)
{
	float raiz;
	raiz = (-b)/(2*a);
	printf ("\nA unica raiz sera: %f", raiz);
	getch();
}

int main() 
{
	int a, b, c, delta1;
	printf ("Digite os coeficientes a, b e c da equacao:\n");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	delta1 = raizes (a,b,c);
	if (delta1 >0)
		raiz_posi (delta1,a,b,c);
	else
		if (delta1 == 0)
			raiz_zero (a,b);
		else
		printf  ("\nNao existe raiz real!");
	getch();
}