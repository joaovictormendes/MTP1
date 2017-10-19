#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[5][50], aux[50];
	int i = 0, j, k;
	for(i = 0; i < 5; i++)
	{
		printf("Entre com o nome%d: ", i+1);
		fgets(str[i], 50, stdin);
	}
	for (i=0; i<5; i++)
	for(j=0; j<50; j++)
		{
				if (isalpha (str[i][j]))
				str[i][j] = toupper(str[i][j]);
		}
	
	for(j=1; j<5; j++)
	{
		strcpy(aux,str[j]);
		i = j-1;
		while(i >= 0 && strcmp(str[i], aux) > 0)
			{
				strcpy(str[i+1],str[i]);
				i--;
			}
			strcpy(str[i+1],aux);
	}


	printf("\nOs nomes ficarao assim em ordem alfabetica: \n");
	for(i = 0; i < 5; i++)
		{
		printf("%s \n",str[i]);
		}
	system("pause");
}