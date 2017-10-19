#include <iostream>
#include <stdlib.h>

#include <time.h>
#include <stdio.h>
using namespace std;

void main ();
{
	srand(time(0));
	int var, var2;
	var = rand()%100;	
	var2 = 101 + rand()%294;
	printf ("Primeiro numero sorteado: %d! Segundo numero sorteado: %d!\n", var, var2);
	return 0;
}