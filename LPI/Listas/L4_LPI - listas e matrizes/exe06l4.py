# Autor: Thelsandro Antunes
# Data: 06/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 06: Escreva uma funcao em python que receba uma string e uma letra. Retorne TRUE se a
#             letra estiver presente na string, caso contrario, retorne FALSE.

from __future__ import print_function


def verificaString(s,c):

  print()
  print(c,s)
  r = False
  for l in s:
    if c == l:
      r = True
            
  return r


string = raw_input("Palavra?")

letra = raw_input("Letra?")
while(len(letra) != 1):
  letra = raw_input("Letra?")
  
print(verificaString(string,letra))
