#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	float var1, var2, soma,i,j,k;
	printf ("Digite dois numeros reais: ");
	scanf ("%f %f", &var1, &var2);
	unsigned char *y1 = (unsigned char*)&var1;
	unsigned char *y2 = (unsigned char*)&var2;
	soma = var1 + var2;
	unsigned char *y3 = (unsigned char*)&soma;
	for (i = 0; i<sizeof(var1); i++, y1++)
	{
		printf ("O conteudo do endereco %p sera: %x\n", y1, *y1);
	}
	for (j = 0; j<sizeof(var2); j++, y2++)
	{
		printf ("O conteudo do endereco %p sera: %x\n", y2, *y2);
	}
	for (k= 0; k<sizeof(soma); k++, y3++)
	{
		printf ("O conteudo da soma do endereco da %p sera: %x\n", y3, *y3);
	}
	system ("Pause");
}