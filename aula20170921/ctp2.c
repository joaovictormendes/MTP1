#include <conio.h>
#include <stdio.h>
#include <ctype.h>

int main ()
{
	char str[500];
	printf ("Digite sua mensagem: ");
	fgets(str,500,stdin);
	for (int i=0; str[i] != '\0'; i++)
	{
			if (isalpha (str[i]))
			str[i] = tolower(str[i]);
	}
	printf ("\nA mensagem em letras minusculas sera: %s.\n", str);
	system ("pause");
	getche();
	return 0;
}
