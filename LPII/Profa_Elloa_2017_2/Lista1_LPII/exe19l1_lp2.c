/*  Autor: Thelsandro Costa Antunes
*   Data: 02/09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 19: Escreva um programa para ler vinte valores inteiros e imprimir cada um dos valores
*               acompanhados de todos os seus divisores exatos.
*/

#include<stdio.h>

int main(){
  
  int i, num;
  
  for(i=0;i<5;i++){
    
    scanf("%d", &num);
    printf("\nNumero %d: ",num);
    for(int j=num;j>0;j--){
      if(num%j==0){
        printf(" [%2d]", j);
      }      
    }
    printf("\n\n");
  }
  
  return 0;
}

