# Autor: Thelsandro Antunes
# Data: 03/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 17: Defina uma funcao ehVogal(char) que retorna True se char ee uma
#             vogal ('a','e','i','o' ou 'u'), e False em caso contrario. Assuma que char
#             e um unico caractere, que pode estar em caixa alta ou caixa baixa, isto
#             e, as entradas 'A' e 'a' sao validas, por exemplo.


def ehVogal(letra):
  vogal = ["A","a","E","e","I","i","O","o","U","u"]
  
  r = False
  for letter in vogal:
    if letter == letra:
      r = True
      break    
  
  return r

letra = raw_input("Letra?")

if ehVogal(letra):
  print("E vogal")
else:
  print("E consoante")
