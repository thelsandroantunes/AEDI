# Autor: Thelsandro Antunes
# Data: 31/03/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 04: Escreva um programa para ler tres valores inteiros, imprimir os valores
#             lidos e determinar o valor que nao e o maior e que nao e o menor dos
#             tres valores lidos.


a = int(input())
b = int(input())
c = int(input())

if(a>b and a>c):
  if(b>c):
    print("meio:",b)
  else:
    print("meio:",c)
else:
  if(b>a and b>c):
    if(a>c):
      print("meio:",a)
    else:
      print("meio:",c)
  else:
    if(c>a and c>b):
      if(a>b):
        print("meio:",a)
      else:
        print("meio:",b)
