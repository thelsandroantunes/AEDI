/*  Autor: Thelsandro Costa Antunes
*   Data: 15/09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   PP1 - Número mais divisível, maior número e primos no vetor
*   1ª Versão
*/

#include<stdio.h>
#include<stdbool.h>
#define TAM 100

void maisDivisivel(int*, int);
void bubble_sort(int*);
void maiorConjunto(int*);
void numPrimos(int*);


int main()
{

    int vet[TAM];

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&vet[0],&vet[1],&vet[2],&vet[3],&vet[4],&vet[5],&vet[6],&vet[7],&vet[8],&vet[9],&vet[10],&vet[11],&vet[12],&vet[13],&vet[14],&vet[15],&vet[16],&vet[17],&vet[18],&vet[19],&vet[20],&vet[21],&vet[22],&vet[23],&vet[24],&vet[25],&vet[26],&vet[27],&vet[28],&vet[29],&vet[30],&vet[31],&vet[32],&vet[33],&vet[34],&vet[35],&vet[36],&vet[37],&vet[38],&vet[39],&vet[40],&vet[41],&vet[42],&vet[43],&vet[44],&vet[45],&vet[46],&vet[47],&vet[48],&vet[49],&vet[50],&vet[51],&vet[52],&vet[53],&vet[54],&vet[55],&vet[56],&vet[57],&vet[58],&vet[59],&vet[60],&vet[61],&vet[62],&vet[63],&vet[64],&vet[65],&vet[66],&vet[67],&vet[68],&vet[69],&vet[70],&vet[71],&vet[72],&vet[73],&vet[74],&vet[75],&vet[76],&vet[77],&vet[78],&vet[79],&vet[80],&vet[81],&vet[82],&vet[83],&vet[84],&vet[85],&vet[86],&vet[87],&vet[88],&vet[89],&vet[90],&vet[91],&vet[92],&vet[93],&vet[94],&vet[95],&vet[96],&vet[97],&vet[98],&vet[99]);

    maisDivisivel(vet, TAM);
    printf("\n");
    maiorConjunto(vet);
    printf("\n");
    bubble_sort(vet);
	numPrimos(vet);

    return 0;
}

void maisDivisivel(int* vet, int tam)
{

    int cont=0, pos, maior, n, m,k;
    maior = cont;
    pos=0;

    for(m=0;m<tam;m++)
    {
        cont=0;
        for(n=2;n<vet[m];n++)
        {
            if(vet[m]%n==0)
                cont++;
        }

        if(cont>maior)
        {
            maior = cont;
            pos = m;
        }
    }

    printf("%d:", vet[pos]);

    for(k = 2;k<vet[pos];k++)
    {
        if(vet[pos]%k==0)
            printf(" %d", k);
    }
}

void bubble_sort(int* vet)
{
    int i,j,tmp;

    for(i=0;i<TAM;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(vet[j]<vet[i])
            {
                tmp=vet[i];
                vet[i]=vet[j];
                vet[j]=tmp;
            }
        }
    }
}

void maiorConjunto(int* vet)
{
    int maior=0,i;

    for(i=0;i<TAM;i++)
    {
        if(maior<vet[i])
            maior = vet[i];
    }

    printf("%d",maior);
}

void numPrimos(int* vet)
{
    int i,j,cont=0;

    for(i=0;i<TAM-1;i++)
    {
    	cont=0;
    	for(j=1;j<=vet[i];j++)
        {
    		if(vet[i]%j==0)
    			cont++;
		}
		if(cont==2)
			printf("%d ",vet[i]);
    }

    cont=0;
	for(j=1;j<=vet[TAM-1];j++)
    {
		if(vet[TAM-1]%j==0)
			cont++;
	}

	if(cont==2)
		printf("%d",vet[TAM-1]);
}
