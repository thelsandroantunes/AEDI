# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 39: Escreva um programa que calcula e mostra a raiz quadrada, cubica,
#             quarta e quinta dos inteiros de 2 até 20 , formatando estes resultados
#             como em uma tabela.

from __future__ import print_function

for i in range(2,21):
    print("r2(",i,end=")=")
    print("%.2f"%(i**(1/float(2))),end=" ")
    print("r3(",i,end=")=")
    print("%.2f"%(i**(1/float(3))), end=" ")
    print("r4(",i,end=")=")
    print("%.2f"%(i**(1/float(4))),end=" ")
    print("r5(",i,end=")=")
    print("%.2f"%(i**(1/float(5))))
    print(" ")
    
