# Autor: Thelsandro Antunes
# Data: 28/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 1 Lista de Exercicios (25/03/2015)
# Questao 11: Faca um programa que leia um numero da entrada padrao e apresenta
#             a potencia de dois e de tres do numero.

from __future__ import print_function

n=int(input("num1?"))

print(n, end=" ")
print("** 2 =", end=" ")
print("%.1f " %(n**2))

print(n, end=" ")
print("** 3 =", end=" ")
print("%.1f " %(n**3))
