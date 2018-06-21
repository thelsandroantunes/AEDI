# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 53: Escreva um algoritmo que leia 50 numeros e informe:
#             (a) O maior valor lido;
#             (b) O menor valor lido;
#             (c) A media dos valores lidos.


from random import randint

x=randint(1,1000)
maior=0
menor=x
soma = 0

for i in range(49):
   
   print(x)
   if(maior<x):
     maior=x
   if(menor>x):
     menor=x
   soma = soma + x  
   x=randint(1,1000)
   
print("maior: ",maior)
print("menor: ",menor)
print("media: ",soma/50)
