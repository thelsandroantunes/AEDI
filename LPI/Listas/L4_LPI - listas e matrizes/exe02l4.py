# Autor: Thelsandro Antunes
# Data: 06/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 02: Faca um programa em Python que leia uma lista de 10 (dez) numeros inteiros e verifique
#             quantos numeros digitados sao pares e quantos sao impares.

from __future__ import print_function

lista = []

for i in range(10):
  print("%d "%(i+1), end="")
  aux = int(input("valor?"))
  lista.append(aux)

par = 0
impar = 0

for l in lista:
  if(l%2 == 0):
    par = par + 1
  else:
    impar = impar + 1
    
print()
print("Numero de pares %d" %par)
print("Numero de impares %d" %impar)

