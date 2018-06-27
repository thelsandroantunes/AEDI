/*  Autor: Thelsandro Costa Antunes
*   Data: 25/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 03: Escreva um programa para ler cinco valores inteiros aleatórios, imprimir os valores
*               lidos e determinar o menor dos valores lidos e sua posição no conjunto.
*/


#include<stdio.h>
#define TAM 5

int main(){
  
  int num[TAM], i, menor;
  
  scanf("%d", &num[0]);
  menor = num[0];
  
  for(i=1;i<TAM;i++){
    scanf("%d", &num[i]);
    if(menor > num[i]) menor = num[i];
  }
  
  for(i=0;i<TAM;i++){
    printf("[%d]\t", num[i]);  
  }
  printf("\nmenor: %d\n", menor);
  

  return 0;
}
