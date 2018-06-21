/*  Autor: Thelsandro Costa Antunes
*   Data: 25/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 06: Escreva um programa para ler um número inteiro qualquer e determinar se ele é primo.
*/


#include<stdio.h>

int main(){
  
  int num, ehPrimo=1, d, cont=1;  
  
  scanf("%d",&num);
  
  if(num<=1 || (num%2==0 && num!=2)){
    ehPrimo=0;
  }else{
      d=3;
      while((d<(num/2)+1) && cont){
        if(num%d==0){
          ehPrimo=0;
          cont=0;
        }
        
        d=d+2;        
      }      
  }
  
  if(ehPrimo) printf("E primo\n");
  else printf("NAO e primo\n");    

  return 0;
}
