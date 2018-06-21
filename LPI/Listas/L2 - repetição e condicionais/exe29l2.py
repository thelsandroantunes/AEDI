# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 29: Escreva um programa para ler vinte valores inteiros e imprimir cada
#             um dos valores acompanhados de todos os seus divisores exatos.

from __future__ import print_function

g=0
while(g<3):

  print("*******************")
  n=int(input("n?"))

  print("Divisores exatos: ")
  for i in range(1,n+1):
    if((n%i)==0):
      print(i, end=", ")
  g=g+1
  print()
