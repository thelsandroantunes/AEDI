# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 41: (UEA/EST 2013.2) Escreva um programa que leia dois numeros inteiros
#             m e n , assumindo que m < n e m >= 10 . Imprima os numeros da serie
#             de Fibonacci que estao no intervalo [m, n] . Lembrando que F0 = 0 ,
#             F1 = 1 e Fk = F[k−1] + F[k−2];

from __future__ import print_function

m=int(input("m?"))
n=int(input("n?"))
while((m<10) or (m>n)):
    m=int(input("outro m?"))
    
antant=1
ant=m  
print(0,end=" ")
print(1,end=" ")
for i in range(2,n):
    termo=antant+ant
    print(termo, end=" ")
    antant=ant
    ant=termo
