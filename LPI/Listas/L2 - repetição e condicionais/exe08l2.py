# Autor: Thelsandro Antunes
# Data: 31/03/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 08: Escreva um programa que leia um ponto(x, y) do plano cartesiano e diga se o mesmo está #             dentro da circunferencia de raio 3 e centro no ponto (0, 0) . O ponto está dentro da #             circunferencia se (x − x0 )**2 + (y − y0 )**2 < raio**2 , 
#             em que (x0 , y0 ) e o ponto no centro da circunferencia.


x=float(input())
y=float(input())
y0=0
x0=0
r=3

if((((x-x0)**2)+((y-y0)**2)) < (r**2)):
  print("Esta dentro da circunferencia")
else:
  print("Nao esta dentro da CIRC.")
