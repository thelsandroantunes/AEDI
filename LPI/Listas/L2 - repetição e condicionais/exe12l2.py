# Autor: Thelsandro Antunes
# Data: 01/04/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 12: Escreva um programa para ler um numero inteiro qualquer e determinar
#             se ele e primo.

n=int(input())
if(n==1 or n==2):
  print('Eh primo')
else:
  count=0
  for i in range(n):
    i=i+1
    if(n%i==0):
      count=count+1
  if(count==2):
    print('Eh primo')
  else:
    print('Nao eh primo')
