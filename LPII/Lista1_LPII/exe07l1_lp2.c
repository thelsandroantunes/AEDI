/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 07: Escreva um programa para ler dois números inteiros e determinar se eles são primos
*               gêmeos. Dois números são primos gêmeos se eles são primos e existe uma diferença
*               de dois (2) entre eles. Exemplo: 11 e 13 são primos gêmeos.
*/


#include<stdio.h>

int main(){
  
  int num, a=0, b=0, p=0,k,i,cont;
  
  for(k=0;k<2;k++){
    scanf("%d",&num);
    
    if(k==0) a=num;
    if(k==1) b=num;
    
    if(num==1 || num==2){
      printf("E primo\n");
      p++;
    }else{
      cont=0;  
      for(i=0;i<num;){
        i++;
        if(num%i==0){
          cont++;
        }
      }
      
      if(cont==2){
        printf("E primo\n");
        p++;
      }else{
        printf("Nao e primo\n");
      }
    }  
  }  
    

  if(p==2){
    if((b-a==2) || (a-b==2)){
      printf("Primos gemeos\n");
    }else{
      printf("Nao sao primos gemeos\n") ;
    }
  }
   
  return 0;
}
