# Autor: Thelsandro Antunes
# Data: 06/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 01: Faca um programa em Python que leia uma lista de 5 (cinco) numeros inteiros e
#             mostre-o.

from __future__ import print_function

lista = []

for i in range(5):
  print("%d "%(i+1), end="")
  aux = int(input("valor?"))
  lista.append(aux)
  
print(lista)
