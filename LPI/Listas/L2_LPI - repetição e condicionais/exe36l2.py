# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 36: Escreva um programa que leia um caractere minusculo e crie na tela
#             um triangulo de caracteres. Para a letra e , por exemplo, o triangulo
#             resultante deve ser:
#
#             a
#             bb
#             ccc
#             dddd
#             eeeee

from __future__ import print_function

alf = ["a","b","c","d","e","f","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
letra = str(raw_input("letra? "))
print()

for j in range(len(alf)):
  if(letra == alf[j]):
    for i in range(j+1):
      print(alf[i]*(i+1))
        



