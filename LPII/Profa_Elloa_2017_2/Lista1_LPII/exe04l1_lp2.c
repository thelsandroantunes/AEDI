/*  Autor: Thelsandro Costa Antunes
*   Data: 25/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 04: Escreva um programa para ler três valores inteiros, imprimir os valores lidos e de-
*               terminar o valor que não é o maior e que não é o menor dos três valores lidos.
*/


#include<stdio.h>

int main(){
  
  int a,b,c, menor, maior;
  
  scanf("%d%d%d",&a,&b,&c);
  
  printf("\nNao e maior e nem menor: ");
  if(a>b && a>c){
    if(b>c) printf("%d \n", b);
    else printf("%d \n", c);
  }else if(b>a && b>c){
      if(a>c) printf("%d \n", a);
      else  printf("%d \n", c);
  }else if(c>a && c>b){
        if(a>b) printf("%d \n", a);
        else  printf("%d \n", b);
  }

  return 0;
}
