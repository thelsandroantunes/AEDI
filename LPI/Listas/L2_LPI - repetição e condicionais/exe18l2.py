# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 18: Escreva um programa para ler vinte numeros inteiros e determinar se
#             cada um desses numeros e par ou impar.


for i in range(20):
  n=int(input())

  if(n%2==0):
    print(n, "par")
  else:
    print(n, "impar")
