# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 58: Escreva um algoritmo em Python que construa uma matriz de ordem
#             constante e igual a 6. Os valores a serem preenchidos na matriz sao
#             inteiros e positivos, ja fornecidos pelo usuario de acordo como reque-
#             rido pelo programa. O seu algoritmo tambem deve determinar quais e
#             quantos numeros da matriz correspondem ao fatorial de algum numero,
#             se houver. Veja o exemplo a seguir para uma matriz de ordem 3.
#
#                         ---------------
#                         - 3 -  6  - 8 -
#                         ---------------
#            * Entrada    - 0 - 120 - 2 -
#                         ---------------      
#                         - 5 - 12 - 14 -
#                         ---------------
#            * Saida:
#               - 6 é o resultado do fatorial de 3
#               - 120 e o resultado do fatorial de 5
#               - 2 e o resultado do fatorial de 2
#               - 1 e o resultado do fatorial de 0 (OBS: o resultado do fatorial
#                 de 1 tambem esta correto)
#               - 4 numeros na matriz correspondem ao resultado do fatorial.


from __future__ import print_function 

def fatorial(n):
  fat = 1    
  for x in range(n,1,-1):  
    fat = fat * x
  return fat          

nlin = 3
ncol = 3

m=[]
for i in range(nlin):
  n=[]
  for j in range(ncol):
    aux=int(input())
    n.append(aux)
  m.append(n)

maior=0
for i in range(nlin):
  print(" ")
  for j in range(ncol):
    print("[%d] " %m[i][j], end=" ")
    if(maior < m[i][j]):
      maior = m[i][j]

print(" ")
cont=0
result=0
cp=list(m)
for i in range(nlin):  
  for j in range(ncol):   
    result = fatorial(cp[i][j])    
    if(result <= maior): 
      for m in range(nlin):  
        for n in range(ncol):                    
            if(result == cp[m][n]):
              print("%d"%result, end=" ")
              print("e o resultado do fatorial %d"%cp[i][j])
              cont = cont + 1

            
print("%d numeros na matriz correspondem ao resultado do fatorial"%cont)




