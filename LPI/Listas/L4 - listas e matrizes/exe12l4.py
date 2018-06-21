# Autor: Thelsandro Antunes
# Data: 11/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 12: Leia duas listas de inteiros e faca uma funcao que recebe os dois vetores e retorne uma
#             terceira lista com a uniao entre os mesmos. O vetor uniao nao deve conter numeros
#             repetidos e dever ser ordenado de forma crescente. Os vetores nao terao numeros
#             repetidos em si. 


from random import randint


def ordenacao(v):
  
  for i in range(len(v)-1):
    trocou = False
    for j in range(len(v)-1-i):
      if(v[j] > v[j+1]):
        aux = v[j]
        v[j] = v[j+1]
        v[j+1] = aux
        trocou = True
    if not trocou:
      break
      
  return v


def vetor3(l1,l2):
  
  vet = l1+l2   
  vetNov = list(set(vet))

  return ordenacao(vetNov)
  


TAM = 10
lista1 = []
lista2 = []
for i in range(TAM):
  
  x = randint(0,100)
  y = randint(0,100)
  
  lista1.append(x)
  lista2.append(y)

print("Vet1")
print(lista1)  
print("Vet2")
print(lista2)

  
unico1 = list(set(lista1)) 
unico2 = list(set(lista2))
matx = vetor3(unico1,unico2)
print("VetUniao")
print(matx)
  
