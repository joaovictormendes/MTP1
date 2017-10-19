#include <stdio.h>
using namespace std;

int main ()
{
	int aux, vet[10], i, j, z, k;
	for (i=0; i<10; i++)
	{
		printf ("Digite um numero para vet[%d]: ", i+1);
		scanf ("%d", &vet[i]);
		printf ("\n");
	}
	for (j=0; j<5; j++)
	{
		for (z=9; z >= 5; z--)
			{
				aux = vet[j];
				vet[j] = vet[z];
				vet[z] = aux;
			}
	}
	printf ("\nO vetor invertido sera: ");
	for (k = 0; k < 10; k++)
		printf ("%d" , vet[k]);
	return 0;
}