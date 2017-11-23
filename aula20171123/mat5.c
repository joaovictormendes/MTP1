#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matriz.h"

int linear(int A[][], int B[][], int nlin)
{
	int i, j, aux;
	int C[nlin][0];
	for (i=0; i<= nlin; i++)
	{
		for (j=0; j<= nlin; j++)
		{
			C[i][0] = 0;
			aux = (1/A[i][j]) * B[i];
			C[i][0] = aux;
			aux = 0;
		}
	}
	imprimirMatriz(C);
}


int main() {
	Matriz A, B;
	int nlin, ncol, i, ncol1 = 0;
	printf("Entre com a ordem da sua matriz: ");
	scanf("%d", &nlin); 
	ncol = nlin;
	A = criarMatriz(nlin, ncol);
	B = criarMatriz(nlin, ncol1);
	preencherMatriz(A);
	preencherMatriz(B);
	linear(A,B, nlin);
	return EXIT_SUCCESS;
}
