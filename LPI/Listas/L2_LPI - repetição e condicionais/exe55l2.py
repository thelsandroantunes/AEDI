# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 55: Escrever um programa para ler um numero inteiro do usuario e exibir
#             o maior numero primo que seja menor do que o numero digitado.

from __future__ import print_function

n = int(input("n?"))

while(True):
  n=n-1
  ehprimo = True
  if((n<=1) or ((n%2==0) and (n!=2))):
    ehprimo = False
  else:
    for d in range(3,(n//2)+1,2):
      if((n%d)==0):
        ehprimo=False
        break

  if(ehprimo):
    print(n)
    print("Eh primo")
    break
  
    
    


