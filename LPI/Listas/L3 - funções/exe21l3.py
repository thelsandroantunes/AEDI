# Autor: Thelsandro Antunes
# Data: 03/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 21: Escreva uma funcao regraMPB que recebe como argumento uma palavra
#             qualquer e retorne a palavra invalida caso verifique o uso da letra 'n'
#             antes de 'p' ou 'b'. Caso contrario, retorne a palavra valida. Veja os
#             asserts a seguir.
#               * assert regraMPB("Gamba")
#               * assert not regraMPB("Granpo")


def regraMPB(word):
  
  r = "invalido"
  for i in range(len(word)):
    if((word[i] == "P") or (word[i] == "p")):
      if((word[i-1] == "M") or (word[i-1] == "m")):
        r = "Valido"      
    
    if((word[i] == "B") or (word[i] == "b")):
      if((word[i-1] == "M") or (word[i-1] == "m")):
        r = "Valido"
  
  return r
  
word = raw_input("palavra? ")

print("%s "%regraMPB(word))

