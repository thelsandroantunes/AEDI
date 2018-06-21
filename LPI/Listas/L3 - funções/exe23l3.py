# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 23: Dizemos que um inteiro positivo n e perfeito se for igual de a soma
#             seus divisores positivos diferentes de n . Por exemplo, 6 e perfeito, pois
#             1+2+3 = 6 . Escreva uma funao, que permita imprimir os k primeiros
#             numeros perfeitos.

from __future__ import print_function

def divisores(n):
  
  lista = []
  for i in range(1,n):
    if((n%i) == 0):
      lista.append(i)  
      
  soma = 0
  for j in lista:
    soma = soma + j    
    
  if(n==soma):
    print(lista)
  else:
    print("%d NAO e perfeito"%n)
    
    
    
 
n = int(input("numero?"))

print()
divisores(n) 

