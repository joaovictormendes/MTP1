#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ponto{
	float x;
	float y;
};

void ler(char * texto, int n){
    FILE*arquivo;
    char * nome[150];
    printf("Qual arquivo deseja abrir? ");
    scanf("%s",texto);
    arquivo=fopen(texto,"r");
    if(arquivo==NULL)
        printf("\nArquivo nao encontrado\n");
    else
    {
		fgets(texto,150,arquivo);
        fscanf(arquivo,"%s",texto);
        fclose(arquivo);
        fprintf(stdout,"%s",texto);
		centroide (texto, n);
    }
}

void centroide (char *texto,int n){
	int somax=0, somay=0, i, j;
	float centx, centy;
	for (i=0; i<n; i++){
		somax = somax + vetor[i].x;
	}
	for (j=0; j<n; j++){
		somay = somay + vetor[i].y;
	}
	centx = somax/n;
	centy = somay/n;
	printf ("\nO centroide sera x = %f e y = %f.", centx, centy);
}

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
	ler (nomearquivo, n);
	return 0;
}
