# Autor: Thelsandro Antunes
# Data: 31/03/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 06: Escreva um programa que leia tres numeros naturais, e verifique se eles
#             podem formar os lados de um triangulo retangulo.


a= int(input())
b=int(input())
c=int(input())

if(a+b>c and b+c>a and c+a>b):
  print("Triangulo existe")
else:
  print("Nao existe")
