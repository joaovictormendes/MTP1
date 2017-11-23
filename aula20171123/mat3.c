#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matriz.h"

int main() {
	Matriz A, COMAT, At, invers;
	int nlin, ncol, i, j, cof, det1;
	printf("Entre com a ordem da sua matriz quadrada: ");
	scanf("%d", &nlin); 
	ncol = nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	menor(A, nlin, ncol);
	for (i=0, i<=nlin; i++0
	{
		for (j=0; j<=ncol; j++)
		{
			cof = cofator(A, i, j);
			COMAT[i][j] = cof;
		}
	}
	At = transposta(COMAT);
	det1 = determiante(A);
	detr = 1/det1;
	invers = multiplicar(detr, At);
	imprimirMatriz(invers);
	destruirMatriz(A);
	destruirMatriz(At);
	destruirMatriz(COMAT);
	destruirMatriz(invers);
	return EXIT_SUCCESS;
}