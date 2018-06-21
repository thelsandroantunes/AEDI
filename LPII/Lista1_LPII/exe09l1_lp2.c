/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 09: Escreva um programa que leia três números naturais, e verifique se eles podem
*               formar os lados de um triângulo retângulo.
*/

#include<stdio.h>

int main(){

  int a,b,c;
  
  scanf("%d",&a);
  while(a<=0){
    printf("Digite novamente lado A: ");
    scanf("%d",&a);
  }
  scanf("%d",&b);
  while(a<=0){
    printf("Digite novamente lado B: ");
    scanf("%d",&b);
  }
  scanf("%d",&c);
  while(a<=0){
    printf("Digite novamente lado C: ");
    scanf("%d",&c);
  }
  
  if((a+b>c) && (b+c>a) && (c+a>b)){
    printf("Existe Triangulo\n");
  }else{
    printf("NAO EXISTE\n");
  }
  
  return 0;
}

