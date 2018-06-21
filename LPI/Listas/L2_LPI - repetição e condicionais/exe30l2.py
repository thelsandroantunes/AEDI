# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 30: Escreva um programa que leia dois valores inteiros a e b ( a sempre par
#             e menor que b ), calcule o produtório dos números pares compreendidos
#             entre a e b, inclusive. O programa deve imprimir o produtorio e a
#             quantidade de elementos que compoem o produtorio.

a=int(input("A? "))
while((a%2)!=0):
  a=int(input("A? "))

b=int(input("B? "))

if(a>b):
  aux = b
  b=a
  a=aux

prod=1
for i in range(a,b+1):
  if((i%2)==0):
    prod=prod*i
    
print("Produtorio entre A e B: ", prod)
