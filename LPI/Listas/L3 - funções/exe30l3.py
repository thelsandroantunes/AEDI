# Autor: Thelsandro Antunes
# Data: 05/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 30: (UEA/EST 2010.2) Escreva um programa na linguagem Python para
#             receber um numero N , digitado, pelo inteiro usuario. Caso o numero
#             digitado seja impar e menor que 10 , imprimir o fatorial desse numero.
#             O calculo do fatorial deve ser feito por uma funcao, que recebe o valor
#             digitado por parametro e retorna o valor do fatorial calculado. Caso N
#             seja par e maior ou igual a dez, passar esse valor para outra funcao por
#             parametro e calcular e retornar a soma dos inteiros de 1 a N . Imprimir
#             o valor retornado pela funcao.

def fatorial(n):
  
  fat = 1
  for i in range(n,1,-1):
    fat = fat * i  
    
  return fat
  
def somaN(n):
  
  soma = 0
  for i in range(1,n+1):
    soma = soma + i

  return soma
  
  
n = int(input("numero?"))

if((n%2 != 0) and (n < 10)):
  print("Fatorial: %d" %fatorial(n))
else:
  print("Soma: %d" %somaN(n))
