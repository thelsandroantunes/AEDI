# Autor: Thelsandro Antunes
# Data: 03/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 16: Escreva uma funcao em Python evalQuadratic(a,b,c,x) que retorna
#             o valor a * x**2 + b * x + c


def evalQuadratic(a,b,c,x):

  valor = a*x**2 + b*x + c
  
  return valor
  

a = int(input("a?"))
b = int(input("b?"))
c = int(input("c?"))
x = int(input("x?"))

print("a * x**2 + b * x + c = %d" %evalQuadratic(a,b,c,x))
