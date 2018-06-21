# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 24: Crie uma funcao em Python que receba um numero inteiro e retorne o
#             seu fatorial.

from __future__ import print_function

def fatorial(n):
  
  fat = 1
  for i in range(n,1,-1):
    fat = fat * i  
    
  return fat
  
  
n = int(input("numero?"))

print()
print("FATORIAL: %d"%fatorial(n) )

