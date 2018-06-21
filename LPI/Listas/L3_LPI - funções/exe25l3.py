# Autor: Thelsandro Antunes
# Data: 04/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 25: Crie uma funcao em Python que recebe dois numeros inteiros n e p e
#             calcula o numero de combinacoes de n tomadas p a p .

from __future__ import print_function

def fatorial(n):
  
  fat = 1
  for i in range(n,1,-1):
    fat = fat * i  
  
  return fat

def combinacao(n,p):
  np = n-p
  c = fatorial(n) / (fatorial(np)*fatorial(p))
  
  return c
  
n = int(input("n?"))
p = int(input("p?"))

print()
print("C[n,p]: n!/[n-p]!p!")



print()
print("C[%d," %n, end="")
print("%d]:" %p, end="")
print(" %d " %combinacao(n,p))

