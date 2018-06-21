/*  Autor: Thelsandro Costa Antunes
*   Data: /09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 16: Escreva um programa para determinar todos os números palíndromos perfeitos do
*               intervalo [1000, 9999]. Um número é palíndromo perfeito quando pode ser lido da
*               direita para a esquerda sem alterar seu valor, tal como 1661.
*/

//FALTA TERMINAR

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  
  
  char letter[4], teste[4];
  int i,j;
  
  printf("\nNumeros palindromos entre 1000 a 9999\n");
  for(i=1000;i<=9999;i++){
    letter = itoa(i, letter, 10);    
  
    for(j=3;j>-1,j--)){
      teste = strcat(teste,letter[j]);
    }
    
    if(!strcmp(teste,letter)){
      printf("%d\t", atoi(letter));
    }
    
  }
    

  
  
  return 0;
}

