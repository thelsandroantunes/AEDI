/*  Autor: Thelsandro Costa Antunes
*   Data: 25/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 01: Escreva um programa para ler três números reais quaisquer e imprimir estes números
*               em ordem numérica crescente.
*/


#include<stdio.h>

int main(){
  
  float a,b,c;
  
  scanf("%f%f%f",&a,&b,&c);
  
  if(a>b && a>c){
    if(b>c) printf("%0.2f %0.2f %0.2f\n", c, b, a);
    else printf("%0.2f %0.2f %0.2f\n", b, c, a);
  }else if(b>a && b>c){
      if(a>c) printf("%0.2f %0.2f %0.2f\n", c, a, b);
      else  printf("%0.2f %0.2f %0.2f\n", a, c, b);
  }else if(c>a && c>b){
        if(a>b) printf("%0.2f %0.2f %0.2f\n", b, a, c);
        else  printf("%0.2f %0.2f %0.2f\n", a, b, c);
  }

    return 0;
}
