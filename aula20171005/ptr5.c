#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main()
{
	srand(time(0));
	int vetor[1000], i, j, flag=0;
	for (i = 0; i < 1000; i++)
	{
		vetor[i] = rand()%RAND_MAX;
	}
	unsigned char *pont = (unsigned char*)&vetor, var;
	printf ("Digite um numero de 0 a 255: ");
	scanf ("%u", &var);
	for (j = 0; j<sizeof(vetor); j++, pont++)
	{
		if (*pont == var)
		{
			printf ("O conteudo do endereco %p sera igual ao numero escolhido.\n", pont);
			flag++;
		}
	}
	printf ("Ou seja, foram encontrados %d bytes iguais %u.\n", flag, var);
	system ("Pause");
}