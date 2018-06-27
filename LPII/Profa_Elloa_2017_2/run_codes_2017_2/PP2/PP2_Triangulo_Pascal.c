/*  Autor: Thelsandro Costa Antunes
*   Data: 22/09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   PP2 - Triângulo de Pascal
*   1ª Versão
*/

#include<stdio.h>



int fatorial(int);
int combinacao(int, int);

int main()
{

    int n,c;
    int qtd;
    int div;
	int i,j,cont=0,k;

	scanf("%d",&n);
	scanf("%d",&qtd);
	scanf("%d",&div);

    i=qtd;
    k=n;

  	while(qtd>0)
    {
        c=0;

        for(j=0;j<n+1;j++)
        {
            qtd--;
            c = combinacao(n,j);
            if(c%div==0)
                cont++;

            if(qtd==0) 
                j=n+1;
        }

        n++;
  	}

  	printf("%d",cont);
  	while(i>0)
    {
        c=0;
        for(j=0;j<k+1;j++)
        {
            i--;
            c = combinacao(k,j);
            if(c%div==0)
                printf("\n(%d,%d)",k,j);

            if(i==0) 
                j=k+1;
        }
        k++;
  	}
    return 0;
}

int fatorial(int n)
{	
    if (n>0)	
        return n*fatorial(n-1);	
    else	
        return 1;	
}

int combinacao(int n, int p)
{	
    return fatorial(n)/(fatorial(p)*fatorial(n-p));	
}
