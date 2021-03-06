# Autor: Thelsandro Antunes
# Data: 13/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 17: Crie uma funcao que verifique a intersecao entre os numeros das Sequencia de
#             Fibonacci e Tribonacci. Utilize os numeros de 0 a 100.
#             Faca uma funcao retornar os numeros da Sequencia de Fibonacci, uma para a Sequencia
#             de Tribonacci e outra para verificar a intersecao entre as duas listas.

from __future__ import print_function

def intersecao(l1,l2):
  
  vet = []
  for i in range(len(l1)):
    for j in range(len(l2)):
      if(l1[i] == l2[j]):
        vet.append(l2[j])
        del(l2[j])
        break
        
  return vet

def tribonacci():
  
  vet = []    
  antp = 1
  pen = 1
  ult = 2
  vet.append(antp)
  vet.append(pen)
  vet.append(ult)
  
  atual = antp + pen + ult
  while(atual < 101):
      
      vet.append(atual)
      antp = pen
      pen = ult
      ult = atual
      atual = antp + pen + ult
      
  return vet

def fibonacci():
 
  vet = [] 
  antant=0
  ant=1    
  vet.append(antant)
  vet.append(ant)
  termo = antant + ant        
  
  while(termo < 101):
    
    vet.append(termo)
    antant = ant
    ant = termo
    termo = antant + ant    
  
  return vet

lista = []

print("numeros de 0 a 100")
print("------------------")

f = fibonacci()
print("Fibonacci")
print(f)
t = tribonacci()
print("\nTribonacci")
print(t)

print("\nIntersecao")
i = intersecao(f,t)
print(i)
