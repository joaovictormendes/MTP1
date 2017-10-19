#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int dado() {
	int dado;
	dado = rand()%6 + 1;
	return dado;
}

int dado1() {
	int dado1;
	dado1 = rand()%6 + 1;
	return dado1;
}

int dado2() {
	int dado2;
	dado2 = rand()%6 + 1;
	return dado2;
}

int dado3() {
	int dado3;
	dado3 = rand()%6 + 1;
	return dado3;
}

int dado4() {
	int dado4;
	dado4 = rand()%6 + 1;
	return dado4;
}

int main() {
	int flag = 0;
	srand(time(0));
	do
	{
	int dado5, dado6, dado7, dado8, dado9, soma;
    char c;
    printf("Simulador de dado vs. 1.0 - Digite ENTER para rodar o dado ");
	scanf("%c", &c);
	dado5 = dado();
	printf("... %d\n", dado5);
	dado6 = dado1();
	printf("... %d\n", dado6);
	dado7 = dado2();
	printf("... %d\n", dado7);
	dado8 = dado3();
	printf("... %d\n", dado8);
	dado9 = dado4();
	printf("... %d\n", dado9);
	soma = dado5 + dado6 + dado7 + dado8 + dado9;
	printf ("A soma dos resultados dos dados sao: %d. \n", soma);
	if (soma >= 18 && soma <= 23)
		{
			printf ("\nVOCE GANHOU!!!!\n");
			break;
		}
	else
		{
			printf ("VOCE PERDEU!!!!\n");
			flag++;
		}
	}while(flag < 3);
	return 0;
}