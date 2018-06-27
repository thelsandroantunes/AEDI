/*  Autor: Thelsandro Costa Antunes
*   Data: 26/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   1ª LISTA DE EXERCÍCIOS
*   Questao 11: Faça um programa que leia a idade de uma pessoa e informe sua classe eleitoral:
*               não eleitor (abaixo de 16 anos), eleitor obrigatório (entre 18 e 65 anos) e eleitor
*               facultativo (entre 16 e 18 anos e acima dos 65 anos).
*/

#include<stdio.h>

int main(){
  
  int idade;
  
  scanf("%d",&idade);
  
  if(idade < 16) printf("Nao eleitor\n");
  else if((idade>=18) && (idade<=65)) printf("Eleitor Obrigatorio\n");
  else if(((idade >=16) && (idade<18)) || (idade >65)) printf("Eleitor Facultativo\n");

  return 0;
}

