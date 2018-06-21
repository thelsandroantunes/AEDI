# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 06: Escreva uma funcao em Python que verifique se um numero lido do
#             teclado e par. O retorno da funcao deve ser do tipo boolean.


def par(num):
  
  if(num%2 == 0):
    p = True 
  else:
    p = False 
  return p


n = int(input("numero?"))

ok = par(n)

if ok :
  print("E par!")
else:
  print("NAO e par!")
