#include <conio.h>
#include <stdio.h>

int main ();
{
	int num, flag = 0;
	printf("Digite o numero desejado: ");
	scanf("%d", &num);
	for (int i = 1; i < num; i++)
	{
		if (num%i == 0)
		flag = flag + i;
	}
	if (flag == num)
	printf("\nEsse numero e' perfeito!\n");
	else
	printf("\nEsse numero nao e' perfeito!\n");
	getche();
	return 0;
}
