# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 09: Crie uma funcao em Python que converte um numero de Celsius para
#             Fahrenheit. Utilizando esta funcao, e possivel tambem converter de
#             Fahrenheit para Celsius?


def fahrenheit(C):

  F = 1.8*C+32
  
  return F
  
#Nao utiliza-se a mesma funcao de fahrenheit, pois inverte-se os dados
def celsius(F):

  C = (F-32)/1.8
  
  return C

  
num = float(input("Celsius?"))
print("Convertido em Fahrenheit: %3.2f" %(fahrenheit(num)))
print()
num = float(input("fahrenheit?"))
print("Convertido em Celsius: %3.2f" %(celsius(num)))
