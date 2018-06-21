# Autor: Thelsandro Antunes
# Data: 07/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 09: Escreva um programa em Python que leia dois vetores com 10 elementos cada e gere
#             um terceiro vetor de 20 elementos, cujos valores deverao ser compostos pelos
#             elementos intercalados dos dois outros vetores. Ao final o programa devera mostrar os
#             dois vetores originais e o terceiro vetor com os valores intercalados.

from __future__ import print_function

def vetor(l1,l2):
  
  vet = []
  for i in range(len(l1)):
    vet.append(l1[i])
    vet.append(l2[i])
    
  return vet

lista1 = []

print("LISTA 1 ")
for i in range(5):
  print("%d "%(i+1), end="")
  aux = int(input("valor?"))
  lista1.append(aux)
  
lista2 = []
print("LISTA 2 ")
for i in range(5):
  print("%d "%(i+1), end="")
  aux = int(input("valor?"))
  lista2.append(aux)
  
matx = vetor(lista1, lista2)


print()
print(lista1)
print(lista2)
print(matx)
