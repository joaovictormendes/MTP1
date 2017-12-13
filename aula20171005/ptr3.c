#include <conio.h>
#include <stdio.h>

int main()
{
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}, flag=0, flag2 = 0,i;
	unsigned char *y = (unsigned char*)&vetor;
	for (i = 0; i<sizeof(vetor); i++, y++)
	{
		printf ("O conteudo do endereco %p sera: %x\n", y, *y);
		flag2++;
		if (*y != 0x00)
		{
			flag ++;
		}
	}
	printf ("A quantidade de bytes varridos foram %d e %d com pelo menos um bit igual a 1. \n", flag2, flag);
	getche();
	return 0;
}
