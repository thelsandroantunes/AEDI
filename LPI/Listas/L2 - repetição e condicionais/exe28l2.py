# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 28: Escreva um programa para ler dez grupos de tres valores inteiros cada,
#             imprimir os valores lidos identificando o valor que nao e o maior e que
#             nao e o menor para cada um dos grupos de tres valores.


from __future__ import print_function


def meio(a):
  if(a[0]>a[1] and a[0]>a[2]):
    if(a[1]>a[2]):
      return a[1]
    else:
      return  a[2]
  else:
    if(a[1]>a[0] and a[1]>a[2]):
      if(a[0]>a[2]):
        return a[0]
      else:
        return a[2]
    else:
      if(a[2]>a[0] and a[2]>a[1]):
        if(a[0]>a[1]):
          return a[0]
        else:
          return a[1]


g=1
while(g<10):
  m=[]
  print("*****************")
  for i in range(3):    
    n=int(input("valor?"))
    m.append(n)
        
  print("Grupo",g," MEIO: ", meio(m))
  g=g+1
