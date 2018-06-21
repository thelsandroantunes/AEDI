# Autor: Thelsandro Antunes
# Data: 11/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 13: Faca um programa que calcule a media, moda e mediana de 100 (cem) lancamentos de
#             dois dados, cada valor e representado pela soma da face superior dos dados e deve ser
#             guardado em uma lista.
#
#             Para gerar os 100 (cem) numeros aletorios, use a funcao randint() do modulo (ou
#             bliblioteca) randon.
#
#             ----------------------------------------------------------------------------------------
#             from random import randint       //importa a funcao radint() do modulo random
#             numero = randint(1,6)            //a variavel numero recebe um valor inteiro entre 1 e 6
#             print(numero)                    //imprime o valor contido na variavel numero
#             ----------------------------------------------------------------------------------------



from random import randint


def media(v):

  #soma = 0
  #for i in v:  
  #  soma = soma + i
  md = sum(v) / float(len(v))  
  
  print("Media: %.2f" %md)

  
def moda(v):
  
  repeticao = 0
  for i in v:
    aparicao = v.count(i)
    if(aparicao > repeticao):
      repeticao = aparicao
  
  modas = []
  for i in v:
    aparicao = v.count(i)
    if(aparicao == repeticao) and i not in modas:
      modas.append(i)
  print "Moda: ", modas
  
def mediana(v):

  if(len(v) % 2 == 0):
    n = len(v)
    medn = (v[n/2-1] + v[n/2]) / float(2)
  else:
    medn = v[len(v)/float(2)]
    
  print("Mediana: %.2f " %medn)
    
    
vetor = []

for i in range(100):
  dado1 =  randint(1,6) 
  dado2 = randint(1,6)
  somaFace = dado1 + dado2
  vetor.append(somaFace)

media(vetor)
moda(vetor)
mediana(vetor)

