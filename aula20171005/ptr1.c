#include <conio.h>
#include <stdio.h>

int main()
{
	int i;
	unsigned int var = 0xFACA8421;
	unsigned char *y = (unsigned char*)&var;
	printf ("O endereco sera: %x \n", y);
	for (i = 0; i<sizeof(var); i++, y++)
	{
		printf ("O conteudo do endereco %p sera: %x \n", y, *y);
	}
	getche();
	return 0;
}
