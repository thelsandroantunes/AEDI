/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 10: Escreva um programa para ler vinte números inteiros e determinar se cada um desses
*               números é par ou ímpar.
*/

#include<stdio.h>
#define TAM 20

int main(){
  
  int num,i;
  
  for(i=0;i<TAM;i++){
    scanf("%d",&num);
    if(num%2==0) printf("PAR\n");
    else printf("IMPAR\n");
    
  }
  
  return 0;
}
