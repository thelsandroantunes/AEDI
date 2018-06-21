# Autor: Thelsandro Antunes
# Data: 04/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 29: Escreva uma funcao que recebe n e retorna o n -esimo termo da Serie
#             de Fibonacci.

from __future__ import print_function

def fibonacci(n):
  
  antant = 0
  ant = 1
  print()
  if(n >= 1):
    print("0", end=" ")
  if(n >= 2):
    print("1", end=" ")
    
  for i in range(n-2):    
    termo = antant+ant
    print("%d" %termo, end=" ")
    antant = ant
    ant = termo    
  print()
  
  return termo
 

n = int(input("n?"))


print("n-esimo termo: %d" %fibonacci(n))


