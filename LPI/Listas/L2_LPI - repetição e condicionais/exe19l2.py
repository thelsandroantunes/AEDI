# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 19: Escreva um programa para ler um numero inteiro k
#             e imprimir os k primeiros numeros pares positivos e sua soma.



k=int(input())
soma=0
for i in range(1,k+1):
  if(i%2==0):
    print(i)
    soma+=i
print("soma dos pares: ", soma)
