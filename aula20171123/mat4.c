#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matriz.h"

int multiplica_matrizes(int A[][], int B[][], int nlin, int nlin1, int ncol, int col1);
{
	int i, j, soma = 0, x;
	int C[nlin][ncol1];
	if (ncol == nlin1)
	{
		for (i=0; i<=nlin; i++)
		{
			for (j=0; j<=ncol1; j++)
			{
				 C[i][j] = 0;
                 for(x=0; x<nlin1; x++)
                 {
                 soma += A[i][x] * B[x][j];
                 }
                 C[i][j] = soma;
                 soma = 0;
             }
        }
		imprimirMatriz(C);
	}
	else
		printf ("\nImpossivel realizar a multiplicacao!")
}

int main() {
	Matriz A, Matriz B;
	int nlin, ncol, nlin1, ncol1;
	printf("Entre com a numero de linhas e colunas da primeira matriz: ");
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	printf("Entre com a numero de linhas e colunas da segunda matriz: ");
	scanf("%d", &nlin1); 
	scanf("%d", &ncol1);
	A = criarMatriz(nlin, ncol);
	B = criarMatriz(nlin1, ncol1);
	preencherMatriz(A);
	preencherMatriz(B);
	multiplica_matrizes(A,B,nlin, nlin1, ncol, ncol1);
	return EXIT_SUCCESS;
}
