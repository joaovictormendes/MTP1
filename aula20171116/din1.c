#include <stdio.h>
#include <math.h>
#include <conio.h>


int media (int vet[], int n)
{
	int med, soma = 0, i;
	for (i=0; i<n; i++)
	{
		soma = soma + vet[i];
	}
	med = soma/n;
	return med;
}

void desvio (int vet[], int n)
{
	int x1, i;
	float soma=0, des, desr;
	x1 = media (vet, n);
	printf ("\nA media sera %d.", x1);
	for (i = 0; i <n; i++)
	{
		soma = soma + (vet[i]-x1)*(vet[i]-x1);
	}
	des = sqrt(soma/(n-1));
	printf ("\nO desvio padrao sera %f.", des);
	getche();
}

int main ()
{
	int n, i;
	printf ("Digite a quantidade de numeros que deseja inserir: ");
	scanf ("%d", &n);
	int vet[100];
	for (i=0; i<n; i++)
	{
		printf ("\nDigite o numero desejado: ");
		scanf ("%d", &vet[i]);
	}
	desvio (vet, n);
	return 0;
	getche ();
}