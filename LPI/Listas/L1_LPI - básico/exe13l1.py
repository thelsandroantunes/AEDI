# Autor: Thelsandro Antunes
# Data: 28/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 1 Lista de Exercicios (25/03/2015)
# Questao 13: Faca um programa que leia da entrada padrao um tempo formado por
#             hora e minutos (um numero em real) e apresente o tempo digitado
#             apenas em minutos.
#             Para esta questao considere que para quatro e meia, deve-se digitar 4.30. 
#             Lembre-se ainda que os minutos vao de 0 a 59.

t=float(input("tempo?"))

p1 = int(t) * 60
p2 = (t - int(t))*100
minutos =  p1 + p2

print("tempo em minutos: %d" %minutos)
