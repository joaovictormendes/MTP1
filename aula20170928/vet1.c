#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

int main ()
{
	srand(time(0));
	int num, var, i;
	float vetor[10000], soma = 0, media;
	printf ("Digite um numero inteiro e positivo: ");
	scanf ("%d", &num);
	for (i = 0; i <= 10000; i++)
	{
		var = rand()%num+1;
		vetor[i] = var;
		soma = soma + vetor[i];
	}
	media = soma/10000;
	printf ("\nA media sera: %f!\n", media);
	getche();
	return 0;
}
