#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ponto{
	float x;
	float y;
};
int main (){
	FILE * qualquer;
	struct Ponto * vetor;
	int n, i;
	printf("Quantos pontos deseja registrar?\n");
	scanf("%d", &n);
	printf("Entre com coordenadas separadas por espaço,\n");
	vetor=(struct Ponto *)malloc(n*sizeof(struct Ponto));
	for(i=0;i<n;i++)
	{
		printf("Coordernadas %d:\n", i+1);
		scanf("%f%f", &vetor[i].x, &vetor[i].y);
		printf ("\n");
	}
	printf("Qual o nome do arquivo?\n");
	char nomearquivo[40];
	getchar();
	gets(nomearquivo);
	qualquer = fopen(nomearquivo, "a");
	fwrite(vetor,sizeof(struct Ponto), n, qualquer);
	fclose(qualquer);

return 0;
}