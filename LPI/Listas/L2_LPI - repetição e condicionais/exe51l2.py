# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 51: Escreva um programa que recebe como entrada um inteiro
#             n e que imprime a seguinte serie de numeros:
#             1, 1, 2, 4, 3, 9, 4, 16, . . . , n, n**2

from __future__ import print_function

n = int(input("N?"))

if(n>=1):
  print("1", end=" ")
if(n>=2):
  print("1", end=" ")

ant = 1
  
for i in range(n-2):
  termo = ant+1
  print(termo, end=" ")
  print(termo**2, end=" ")
  ant=termo
