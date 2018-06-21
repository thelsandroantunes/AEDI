# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 45: Crie um algoritmo que leia a quantidade de numeros que se deseja
#             digitar para que possa ser impresso o maior e o menor numero digitados.
#             Nao suponha que todos os numeros lidos serao positivos.

n=int(input("N?"))
val=int(input("valor?"))

maior=0
menor=val

for i in range(n):
  if(maior<val):
    maior = val
  if(menor > val):
    menor = val
  if(i==n-1):
    break
  val=int(input("valor?"))

print("Maior: ",maior)
print("Menor: ", menor)
  
  
  
