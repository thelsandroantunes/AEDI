# Autor: Thelsandro Antunes
# Data: 31/03/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 02: Escreva um programa para ler cinco valores inteiros aleatorios, imprimir
#             os valores lidos e determinar o maior dos valores lidos.


from random import randint

maior=0

for i in range(5):
   x=randint(0,100)
   print(x)
   if(maior<x):
     maior=x

print("maior: ",maior)
