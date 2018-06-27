/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 08: Escreva um programa que leia um número inteiro qualquer e determine se o número
*               que foi lido é par ou ímpar.
*/

#include<stdio.h>

int main(){

  int num;
  scanf("%d",&num);
  
  if(num%2==0) printf("Par\n");
  else printf("Impar\n");

  return 0;
}

