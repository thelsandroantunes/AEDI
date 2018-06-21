/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 14: Escreva um programa para ler um número inteiro k e imprimir os k primeiros nú-
*               meros pares positivos e sua soma
*/

#include<stdio.h>

int main(){
  
  int k,i,soma=0;
  
  scanf("%d",&k);
  
  for(i=k;i>0;i--){
    if(i%2==0){
      printf("[%d]\t",i);
      soma += i;
    }
  }
  
  printf("\nSoma: %d\n",soma);
  
  return 0;
}

