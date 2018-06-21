# Autor: Thelsandro Antunes
# Data: 01/04/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 15: Leia um numero n e imprima todos os divisores exatos deste.


from __future__ import print_function

n=int(input("n?"))

print("Divisores exatos: ")
for i in range(1,n+1):
  if((n%i)==0):
    print(i, end=", ")
