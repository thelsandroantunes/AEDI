# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 46: A Serie de Ricci difere da serie de Fibonacci porque os dois primeiros
#             termos sao fornecidos pelo usuario. Os demais termos sao gerados da
#             mesma forma que a serie de Fibonacci. Crie um algoritmo que gere
#             os n primeiros numeros da Serie de Ricci, em que n >= 3 e um valor
#             informado pelo usuario.

from __future__ import print_function

n = int(input("N?"))


antant = int(input("1termo?"))
ant = int(input("2termo?"))

if(antant > ant):
  aux = antant
  antant= ant
  ant=aux

print(antant, end=" ")
print(ant, end=" ")
  
for i in range(n):
  termo = antant+ant
  print(termo, end=" ")
  antant=ant
  ant=termo
