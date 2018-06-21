/*  Autor: Thelsandro Costa Antunes
*   Data: 02/09/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 20: Escreva um programa que leia dois valores inteiros a e b (a sempre par e menor que
*               b), calcule o produtório dos números pares compreendidos entre a e b, inclusive. O
*               programa deve imprimir o produtório e a quantidade de elementos que compõem o
*               produtório.
*/

#include<stdio.h>

int main(){
  
  int a,b,ok,prod=1,i;
  
  printf("a: ");  
  scanf("%d",&a);
  
  printf("b: ");
  scanf("%d",&b);
  
  if(a%2==0 && a<b)  ok=0;
  else ok=1; 
  
  while(ok){
    printf("a: ");  
    scanf("%d",&a);
    
    if(a%2==0 && a<b){
      ok=0;
    }    
  }  
    
  if(!ok) printf("\na:%d\tb:%d\n\n",a,b);

  for(i=a;i<=b;i++){
    if(i%2==0) prod=prod*i;
  }
  
  printf("produtorio de pares entre [a:b] = %d\n\n",prod);
    
  return 0;
}

