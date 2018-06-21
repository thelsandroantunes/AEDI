# Autor: Thelsandro Antunes
# Data: 13/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 18: Crie uma funcao para determinar o tamanho t da maior sequencia de numeros iguais em
#             uma lista A. 
#
#             Exemplo:  Supor que sejam armazenados os seguintes valores para a lista
#                       A: [1,1,6,6,7,7,7,7,1,1,1], entao t=4.



def seqIgual(v):
  
  repeticao = 0
  for i in v:
    aparicao = v.count(i)
    if(aparicao > repeticao):
      repeticao = aparicao
  
  seq = []
  for i in v:
    aparicao = v.count(i)
    if(aparicao == repeticao) and i not in seq:
      seq.append(i)
  print "repeticao maior: ", seq
  print "tamanho: ", aparicao
  

A = [1,1,6,6,7,7,7,7,1,1,1]
seqIgual(A)
