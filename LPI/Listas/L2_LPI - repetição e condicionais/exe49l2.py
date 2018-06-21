# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 49: Escreva um programa que dado um numero inteiro n, informe se n 
#             pertence a serie de Fibonacci. Lembrando que F0 = 0 , F1 = 1 e
#             Fk = F[k−1] + F[k−2] .

from __future__ import print_function

n=int(input("N? "))
antant=0
ant=1

if n>=1 :
  print("0")
if n>=2 :
  print("1")

i=0
while(i<n-2):
  termo = antant+ant
  
  if(n == termo):
    print(n,end=" pertence a serie fibonacci")
    break
  elif(termo > n):
    print("Numero ",n,end=" nao pertence a serie")
    break  
  print(termo)
  antant=ant
  ant=termo
  i=i+1
