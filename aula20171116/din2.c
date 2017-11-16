#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void preenche(float * elemento) {
  scanf("%f", elemento);
}


void transposta(float **matriz, int N, int M) {
  int i, j;
  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
	{
		matriz[i][j]=matriz[j][i];
	}
	printf("matriz transposta %dx%d:\n", N, M);
	for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
    printf("%g%c", matriz[i][j], (j == M-1)? '\n':'\t');
	getche();
}


int main() {
  int i, j;
  int N, M;
  float **matriz;
  printf("Entre com a ordem da matriz, no formato 'NxM': ");
  scanf("%d", &N);
  scanf("%d", &M);
  matriz = (float**)calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) {
	matriz[i] = (float*)calloc(M,sizeof(float));
    for(j = 0; j < M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  transposta(matriz, N, M);
  for(i = 0; i < N; i++)
	{
		free(matriz[i]);
  free(matriz);
  }
  return 0;
  getche();
}
