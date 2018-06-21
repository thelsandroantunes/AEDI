# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 26: Escreva um programa para ler seguidamente valores inteiros ate que
#             seja lido um valor negativo. Para cada valor lido, exceto o ultimo, o
#             programa deve determinar seu fatorial.

from __future__ import print_function

n=int(input("n?"))
while(n>-1):
  
  fat=1

  for i in range(n,1,-1):
    fat=fat*i

  print("fatorial: ", fat)
  n=int(input("n?"))

