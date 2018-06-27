/*  Autor: Thelsandro Costa Antunes
*   Data: 02/09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 18: Escreva um programa para ler dez grupos de três valores inteiros cada, imprimir os
*               valores lidos identificando o valor que não é o maior e que não é o menor para cada
*               um dos grupos de três valores.
*/

#include<stdio.h>

int main(){
  
  int i,j, ma,me,num;
  
  for(i=0;i<10;i++){
    for(j=0;j<3;j++){
      scanf("%d",&num);
      if(j==0){
        ma=num;
        me=num;
      }else{
        if(ma < num) ma=num;
        if(me > num) me=num;
      }      
    }
    printf("Grupo %d\nMaior: %d\nMenor: %d\n\n",i+1, ma,me);
    
  }
  
  return 0;
}

