# Autor: Thelsandro Antunes
# Data: 04/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 27: Escreva um programa que leia um inteiro nao-negativo n e imprima a
#             soma dos n primeiros numeros primos.


def primo(n):
  
  Ehprimo = False
  resto = 0
  for i in range(1,n+1):
    if((n%i)==0):
      resto = resto + 1
  
  if(resto==2):
    Ehprimo = True
    
  return Ehprimo

  
m = int(input("m?"))
print()

soma = 0
for i in range(m,1,-1):
  
  if primo(i):
    print(i)
    soma = soma + i
    
print("Soma dos N primeiro numero primos: %d" %soma)
