#include <conio.h>
#include <stdio.h>
#include <ctype.h>

int main ()
{
	char str[500];
	int flag = 0;
	printf ("Digite sua mensagem: ");
	fgets(str,500,stdin);
	for (int i=0; str[i] != '\0'; i++)
	{
			if (isalpha (str[i]))
			flag++;
	}
	printf ("\nA quantidade de letras e': %d.\n", flag);
	system ("pause");
	getche();
	return 0;
}
