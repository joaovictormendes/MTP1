#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main ();
{
	srand(time(0));
	int num, flag = 0, var, var2, num2, num3;
	printf("Digite o numero desejado: ");
	scanf("%d", &num);
	if (num%8192 == 0)
	{
		flag++;
		prinf("\nEsse numero e' multiplo de 8192!\n");
	}
	else
	prinf("\nEsse numero nao e' multiplo de 8192!\n");
	var = 1328 + rand()%1361;
	printf ("Quanto e 101 + %d? \n", var);
	scanf("%d", &num2);
	if (num2 == var + 101)
	frag++;
	var2 = rand()%100;
	printf ("Digite a multiplicação de %d por 3: ", var2);
	scanf("%d", &num3);
	if (num3 == var2 * 3)
	flag++;
	printf ("Voce somou um total de %d pontos!\n", flag);
	getche();
	return 0;
}
