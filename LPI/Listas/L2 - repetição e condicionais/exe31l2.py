# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 31: Criar um algoritmo que imprima a tabela de conversão Celsius-Fahrenheit,
#             em intervalos de 1 grau, numa faixa de temperaturas especificada pelo
#             usuario. O algoritmo deve solicitar ao usuario o limite inferior e o limite
#             superior da faixa de temperaturas (em graus Celsius). O valor fornecido
#             pelo usuario sera um inteiro. Formula de conversao: F = 1.8 * C + 32 .
#
#             Exemplo:
#
#             limite inferior: 50
#             limite superior: 52
#
#             Celsius Fahrenheit
#             ------------------
#               50      122
#               51      123.8
#               52      125.6
#
#             Para formatar a saida utilize %3.2f %2d para os dados dos graus Celsius e
#             para os graus Fahrenheit.

l1=int(input("limite inferior: "))
l2=int(input("limite superior: "))

print("Celsius Fahrenheit")
print("__________________")

for C in range(l1,l2+1):
  F = 1.8*C+32
  print("%2d"%C," %3.2f"%F)
