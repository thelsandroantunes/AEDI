# Autor: Thelsandro Antunes
# Data: 12/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 14: Faca um programa que leia uma matriz quadrada e verifique se ela e um quadrado
#             magico. Um quadrado magico ocorre quando a soma de cada linha, cada coluna e das
#             diagonais e igual.

from __future__ import print_function

def quadMagico(vet):
  
  ok = True
  
  #diagonal principal
  magico = 0
  for i in range(len(vet)):
    magico = magico + vet[i][i]
    
  #diagonal secundaria
  soma = 0
  for i in range(len(vet)):
    soma = soma + vet[i][len(vet)-1-i]
  if(soma != magico):    
    ok = False
    
  #linhas
  for i in range(len(vet)):
    soma = 0
    for j in range(len(vet)):
      soma = soma + vet[i][j]
    if(soma != magico):
      ok = False
      
  
  #colunas
  for j in range(len(vet)):
    soma = 0
    for i in range(len(vet)):
      soma = soma + vet[i][j]
    if(soma != magico):
      ok = False

  return ok 
      

matx = []

print("Matriz Quadrada")
nlin = int(input("i?"))
ncol = int(input("j?"))

while(nlin != ncol):
  print("Matriz Quadrada")
  nlin = int(input("i?"))
  ncol = int(input("j?"))
  

print("-----MATRIZ-----")
for i in range(nlin):
  lista = []
  for j in range(ncol):
    print("pos[%d]"%i, end="")
    print("[%d]"%j, end=" =")
    aux = int(input())
    lista.append(aux)
  matx.append(lista)

print("----------------")
for i in range(nlin):
  print("")
  for j in range(ncol):
    print("[%d]"%matx[i][j], end=" ")
    
print("\n----------------")

if quadMagico(matx):
  print("E magico")
else:
  print("Nao e magico")
