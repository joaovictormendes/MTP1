#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int vetor[] = {0,1,2,4,8,16,1025}, flag =0, flag2 = 0, i;
	unsigned char *y = (unsigned char*)&vetor;
	for (i = 0; i<sizeof(vetor); i++, y++)
	{
		printf ("O conteudo do endereco %p sera: %x\n", y, *y);
		flag2++;
		if (*y == 0x000)
		{
			flag ++;
		}
	}
	printf ("A quantidade de bytes varridos foram %d e %d eram 0x00. \n", flag2, flag);
	system ("Pause");
}
