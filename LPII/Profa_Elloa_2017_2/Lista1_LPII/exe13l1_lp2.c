/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 13: Escreva um programa que leia um ponto (x, y) do plano cartesiano e diga se o mesmo
*               está dentro da circunferência de raio a ser fornecido pelo usuário e centro no ponto
*               (0, 0).
*/

#include<stdio.h>

float sqr(float num){
  
  return num*num;
}

int main(){
  
  float x, y, y0=0, x0=0, r;

  printf("\nx: ");
  scanf("%f",&x);
  printf("\ny: ");
  scanf("%f",&y);
  printf("\nraio: ");
  scanf("%f",&r);
  
  if((sqr(x-x0) + sqr(y-y0)) < sqr(r))  printf("Esta DENTRO da circunferencia\n");
  else printf("NAO esta dentro da CIRCUNFERENCIA\n");

  return 0;
}

