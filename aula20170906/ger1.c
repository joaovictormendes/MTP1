#include <iostream>
#include <stdio.h>
using namespace std;

void main ();
{
	int num, flag = 0;
	printf("Digite o numero desejado: ");
	scanf("%d", &num);
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			flag++;
			break;
		}
	}
	if (flag == 0)
	printf("\nEsse numero e' primo!\n");
	else
	printf("\nEsse numero nao e' primo!\n");
	return 0;
}