/*  Autor: Thelsandro Costa Antunes
*   Data: 25/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 02: Escreva um programa para ler cinco valores inteiros aleatórios, imprimir os valores
*               lidos e determinar o maior dos valores lidos.
*/


#include<stdio.h>
#define TAM 5

int main(){
  
  int num[TAM], i, maior=0;
  
  for(i=0;i<TAM;i++){
    scanf("%d", &num[i]);
    if(maior < num[i]) maior = num[i];
  }
  
  printf("maior: %d\n", maior);
  

  return 0;
}
