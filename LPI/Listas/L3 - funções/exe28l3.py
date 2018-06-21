# Autor: Thelsandro Antunes
# Data: 04/07/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 28: Crie uma funcao em linguagem Python chamado dado() que retorna,
#             por meio de uma escolha pseudo-aleatoria, um numero de 1 ate 6 .

from random import randint

def dado():
  
  x = randint(1,6) 
  
  return x


print("")
print("escolha pseudo-aleatoria: %d" %dado())


