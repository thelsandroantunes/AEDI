# Autor: Thelsandro Antunes
# Data: 31/03/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 09: Escreva um programa que leia um ponto(x, y) do plano cartesiano e
#             diga se o mesmo esta dentro da circunferencia de raio a ser fornecido
#             pelo usuario e centro no ponto(0, 0) .

x=float(input("x:"))
y=float(input("y:"))
y0=0
x0=0
r=float(input("raio:"))

if((((x-x0)**2)+((y-y0)**2)) < (r**2)):
  print("Esta dentro da circunferencia")
else:
  print("Nao esta dentro da CIRC.")
