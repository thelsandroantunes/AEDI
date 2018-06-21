# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 33: Escreva um programa para ler um numero inteiro n e 
#             imprimir os n primeiros numeros primos.

from __future__ import print_function

n=int(input())

while(n>-1):
  p=n
  ehprimo=True  
  
  if(p<=1 or (p%2==0 and p!=2)):
    ehprimo=False
  else:
    for d in range(3,(p//2)+1,2):
      if(n%d==0):
        ehprimo=False
        break

  if ehprimo:
    print(p, end=" ")

  n=n-1
