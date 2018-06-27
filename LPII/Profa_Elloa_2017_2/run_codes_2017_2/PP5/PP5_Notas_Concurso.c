/*  Autor: Thelsandro Costa Antunes
*   Data: 18/11/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   PP5 - Notas de Concurso
*   1ª Versão
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct registro
{
	char nome[80];
	float notas[4];
    float notaFinal;
    int rank;
    int ok;
} registro;


void ordenacaoPorNome(registro*, int);
void ordenacaoPorNotaFinal(registro*, int);
void ranking(registro*, int);
float mediaAritmetica(float*);
void ler(registro*,int);
void escrever(registro *, int,int);

int main()
{
	int n, c;
	scanf("%d %d", &n, &c);
	registro *dado;

	dado = (registro*)malloc(c*sizeof(registro));

	ler(dado,c);
	ordenacaoPorNotaFinal(dado,c);
	ranking(dado,c);
	ordenacaoPorNome(dado,c);
	escrever(dado,c,n);

    free(dado);
	return 0;
}

void ordenacaoPorNome(registro *dado, int tam)
{
	int i=1,j;

	registro aux;
    while(i<tam)
    {
        aux = dado[i];
        j=i;
        while((j>0) && (strcmp(aux.nome, dado[j-1].nome) < 0))
        {
            dado[j]=dado[j-1];
            j--;
        }
        dado[j] = aux;
        i++;
    }
}

void ordenacaoPorNotaFinal(registro *dado, int tam)
{
	int i=1,j;

	registro aux;
    while(i<tam)
    {
        aux=dado[i];
        j=i;
        while((j>0) && (aux.notaFinal > dado[j-1].notaFinal))
        {
            dado[j]=dado[j-1];
            j--;
        }
        dado[j]=aux;
        i++;
    }
}

void ranking(registro *dado, int tam)
{
	int i=0;
	while(i<tam)
    {
        dado[i].rank=i+1;
        i++;
	}
}

float mediaAritmetica(float *notas)
{
	return (notas[0] + notas[1] + notas[2] + notas[3])/4;
}

void ler(registro *dado,int tam)
{
    int i=0;
    while(i<tam)
    {
        scanf("%s", dado[i].nome);
        scanf("%f %f %f %f", &dado[i].notas[0], &dado[i].notas[1], &dado[i].notas[2], &dado[i].notas[3]);
        dado[i].notaFinal = mediaAritmetica(dado[i].notas);

        if(dado[i].notaFinal >= 7) dado[i].ok=1;
        else dado[i].ok=0;

        i++;
    }
}

void escrever(registro *dado, int tam,int n)
{
    int i=0;

    while(i<tam)
    {

        if((dado[i].rank <= n) && dado[i].ok)
			printf("%s %.2f %d %s\n", dado[i].nome, dado[i].notaFinal, dado[i].rank, "Aprovado");
		else
        {
            if(dado[i].notaFinal >= 7)
                printf("%s %.2f %d %s\n", dado[i].nome, dado[i].notaFinal, dado[i].rank, "Classificado");
            else
                printf("%s %.2f %d %s\n", dado[i].nome, dado[i].notaFinal, dado[i].rank, "Desclassificado");
        }
        i++;
    }
}
