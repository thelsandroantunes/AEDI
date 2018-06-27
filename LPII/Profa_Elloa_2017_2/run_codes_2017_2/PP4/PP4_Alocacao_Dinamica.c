/*  Autor: Thelsandro Costa Antunes
*   Data: 12/11/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   PP4 - Alocação Dinâmica
*   1ª Versão
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void imprimeLetras(int*);
void contagemLetras(char**, int);
char casoMaiscula(char);
void palindromo(char**, int);

int main()
{

    int tam;    
    scanf("%d",&tam);
	getchar();
    char **matx = (char**)malloc(tam*sizeof(char*));
	char palavra[80];

    if (matx == NULL)
        return 1;
    else
	{        
        for (int i=0;i<tam; i++)
		{	
			fgets(palavra, 80, stdin);			
        	matx[i] = (char*)malloc((strlen(palavra))*sizeof(char));
        	strcpy(matx[i], palavra);            
        	fflush(stdin);

        }
    }
	
	contagemLetras(matx,tam);
	palindromo(matx,tam);	
	free(matx);	
	
    return 0;
}

void imprimeLetras(int *letra)
{

	if(letra[0] != 0) printf("a: %d\n", letra[0]);
	if(letra[1] != 0) printf("b: %d\n", letra[1]);
	if(letra[2] != 0) printf("c: %d\n", letra[2]);
	if(letra[3] != 0) printf("d: %d\n", letra[3]);
	if(letra[4] != 0) printf("e: %d\n", letra[4]);
	if(letra[5] != 0) printf("f: %d\n", letra[5]);
	if(letra[6] != 0) printf("g: %d\n", letra[6]);
	if(letra[7] != 0) printf("h: %d\n", letra[7]);
	if(letra[8] != 0) printf("i: %d\n", letra[8]);
	if(letra[9] != 0) printf("j: %d\n", letra[9]);
	if(letra[10] != 0) printf("k: %d\n", letra[10]);
	if(letra[11] != 0) printf("l: %d\n", letra[11]);
	if(letra[12] != 0) printf("m: %d\n", letra[12]);
	if(letra[13] != 0) printf("n: %d\n", letra[13]);
	if(letra[14] != 0) printf("o: %d\n", letra[14]);
	if(letra[15] != 0) printf("p: %d\n", letra[15]);
	if(letra[16] != 0) printf("q: %d\n", letra[16]);
	if(letra[17] != 0) printf("r: %d\n", letra[17]);
	if(letra[18] != 0) printf("s: %d\n", letra[18]);
	if(letra[19] != 0) printf("t: %d\n", letra[19]);
	if(letra[20] != 0) printf("u: %d\n", letra[20]);
	if(letra[21] != 0) printf("v: %d\n", letra[21]);
	if(letra[22] != 0) printf("w: %d\n", letra[22]);
	if(letra[23] != 0) printf("x: %d\n", letra[23]);
	if(letra[24] != 0) printf("y: %d\n", letra[24]);
	if(letra[25] != 0) printf("z: %d\n", letra[25]);

}

void contagemLetras(char **vet, int tam)
{
	int i,j,pos[26];
	
	for(int k=0;k<26;k++) pos[k]=0;

	for(i=0;i<tam;i++)
	{
		for(j=0;j<strlen(vet[i]);j++)
		{
			if((vet[i][j] == 'a') || (vet[i][j] == 'A'))
			{
				pos[0]++;
			}else if((vet[i][j] == 'b') || (vet[i][j] == 'B'))
			{
					pos[1]++;
			}else if((vet[i][j] == 'c') || (vet[i][j] == 'C'))
			{
					pos[2]++;
			}else if((vet[i][j] == 'd') || (vet[i][j] == 'D'))
			{
					pos[3]++;
			}else if((vet[i][j] == 'e') || (vet[i][j] == 'E'))
			{
					pos[4]++;
			}else if((vet[i][j] == 'f') || (vet[i][j] == 'F'))
			{
					pos[5]++;
			}else if((vet[i][j] == 'g') || (vet[i][j] == 'G'))
			{
					pos[6]++;
			}else if((vet[i][j] == 'h') || (vet[i][j] == 'H'))
			{
					pos[7]++;
			}else if((vet[i][j] == 'i') || (vet[i][j] == 'H'))
			{
					pos[8]++;
			}else if((vet[i][j] == 'j') || (vet[i][j] == 'J'))
			{
					pos[9]++;
			}else if((vet[i][j] == 'k') || (vet[i][j] == 'K'))
			{
					pos[10]++;
			}else if((vet[i][j] == 'l') || (vet[i][j] == 'L'))
			{
					pos[11]++;
			}else if((vet[i][j] == 'm') || (vet[i][j] == 'M'))
			{
					pos[12]++;
			}else if((vet[i][j] == 'n') || (vet[i][j] == 'N'))
			{
					pos[13]++;
			}else if((vet[i][j] == 'o') || (vet[i][j] == 'O'))
			{
					pos[14]++;
			}else if((vet[i][j] == 'p') || (vet[i][j] == 'P'))
			{
					pos[15]++;
			}else if((vet[i][j] == 'q') || (vet[i][j] == 'Q'))
			{
					pos[16]++;
			}else if((vet[i][j] == 'r') || (vet[i][j] == 'R'))
			{
					pos[17]++;
			}else if((vet[i][j] == 's') || (vet[i][j] == 'S'))
			{
					pos[18]++;
			}else if((vet[i][j] == 't') || (vet[i][j] == 'T'))
			{
					pos[19]++;
			}else if((vet[i][j] == 'u') || (vet[i][j] == 'U'))
			{
					pos[20]++;
			}else if((vet[i][j] == 'v') || (vet[i][j] == 'V'))
			{
					pos[21]++;
			}else if((vet[i][j] == 'w') || (vet[i][j] == 'W'))
			{
					pos[22]++;
			}else if((vet[i][j] == 'x') || (vet[i][j] == 'X'))
			{
					pos[23]++;
			}else if((vet[i][j] == 'y') || (vet[i][j] == 'Y'))
			{
					pos[24]++;
			}else if((vet[i][j] == 'z') || (vet[i][j] == 'Z'))
			{
					pos[25]++;
			}		
		}
	}
	
	imprimeLetras(pos);

}

char casoMaiscula(char c)
{		
	if((c >= 'A') && (c <= 'Z')) 
		return 'a'+(c-'A');

	return c;
}

void palindromo(char **nome, int tam)
{
	for(int i=0;i<tam;i++)
	{		
		int coluna = strlen(nome[i])-1;	
		int ok = 1;
		int j=0;
			
		while(j<(coluna/2)+1)
		{		
			if(nome[i][j] == ' ' || nome[i][j] == '\n')
				j++;
			
			if(nome[i][coluna] == ' ' || nome[i][coluna] == '\n')
				coluna--;

			if(casoMaiscula(nome[i][j]) != casoMaiscula(nome[i][coluna]))
				ok = 0;
			
			j++;
			coluna--;
		}
		
		if(ok)
			printf("%s",nome[i]);	
	}
}