/*  Autor: Thelsandro Costa Antunes
*   Data: 25/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 05: Dado um número natural, verifique se ele é o produto de três números sucessivos.
*               Exemplo: 120 = 4 · 5 · 6.
*/


#include<stdio.h>

int main(){
  
  int num, i=0, ver=1, prod;  
  
  scanf("%d",&num);
  
  while(ver){    
    i++;
    prod = i*(i+1)*(i+2);
    
    if(num == prod){
      printf("Eh produto de: %d * %d * %d\n", i, i+1, i+2);
      ver=0;
    }else if(prod > num){
      ver=0;
    }
  }
  

  return 0;
}
