# Autor: Thelsandro Antunes
# Data: 03/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 22: Dizemos que um numero i e congruente modulo m a j se i%m = j%m .
#             Por exemplo, 35 e congruente modulo 4 a 39 , pois 35%4 = 3 = 39%4 .
#             Escreva uma funcao, com definicao listarcongruentes(n,j,m) , que
#             permita imprimir os n primeiros naturais congruentes a j modulo m .

from __future__ import print_function

def listarcongruentes(n,j,m):
  
  aux = 0  
  if(n%j)==(m%j):
    aux = n%j
      
  if(aux > 0):
    for i in range(1,aux+1):
      print(i, end=" ")
  print()    
  

n1 = int(input("num1?"))
mod = int(input("modulo?"))
n2 = int(input("num2?"))

print()
print("Os N primeiros naturais congruentes a j modulo m")
listarcongruentes(n1,mod, n2)
