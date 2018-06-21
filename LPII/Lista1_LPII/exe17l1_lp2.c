/*  Autor: Thelsandro Costa Antunes
*   Data: 02/09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 17: Escreva um programa para ler seguidamente valores inteiros até que seja lido um
*               valor negativo. Para cada valor lido, exceto o último, o programa deve determinar
*               seu fatorial.
*/

#include<stdio.h>

int main(){
  
  int num,fat;
  
  scanf("%d", &num);
  while(num>-1){
    fat=1;    
    for(int i=num;i>0;i--)  fat = fat * i;
    printf("fat de %d: %d\n", num, fat);
    
    scanf("%d", &num);  
  }
  
  return 0;
}

