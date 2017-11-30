#include <stdio.h>
#include <string.h>
#define N 256
void gravarDados ();
void lerDados ();
int main ()
{
    int opcao;
    do{
        printf("\n1- Escrever informacoes\n");
        printf("2- Ler informacoes\n");
        printf("0- Sair\n");
        scanf("%d", &opcao);
		getchar();
        if (opcao==1)
        escrever();
       if (opcao==2)
        ler();
    }while(opcao);
    return 0;
}
void escrever () {
	FILE * arquivo;
	char nome [N];
	int idade;
	float altura; 
	printf("Nome: ");
	fflush(stdin);
	fgets(nome, N, stdin);
	nome [strlen(nome)-1]='\0';
	printf("Idade: ");
	fscanf(stdin, "%d", &idade);
	printf("Altura (em metros): ");
	fscanf(stdin, "%f", &altura);
	arquivo=fopen("info.txt", "w");
		if(arquivo==NULL)
			fprintf(stderr, "Erro na gravacao do arquivo!\n");
		else 
		{
			fprintf(arquivo, "%s\n%d\n%g\n",nome, idade, altura);
			fclose(arquivo);
		}

}
void ler() {
	FILE * arquivo;
	char nome [N];
	int idade;
	float altura; 
	arquivo=fopen("info.txt", "r");
		if(arquivo==NULL)
			fprintf(stderr, "arquivo nao existente!!\n");
		else 
		{
			fgets(nome, N, arquivo);
			nome [strlen(nome)-1]='\0';
			fscanf(arquivo, "%d\n%f\n", &idade, &altura);
			fclose(arquivo);
			printf("Nome: ");
			fprintf(stdout, "%s\n",nome);	
			printf("Idade: ");
			fprintf(stdout, "%d\n",idade);
			printf("Altura: ");
			fprintf(stdout,"%g\n",altura);
		
		}

}