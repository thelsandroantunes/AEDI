# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 27: A Unidade Logica e Aritmetica de um computador calcula o produto
#             por meio de somas sucessivas.
#             Assim, crie um algoritmo que calcule o produto de dois numeros inteiros 
#             lidos utilizando esta metodologia e supondo que o multiplicando seja menor 
#             que o multiplicador.

n1 = int(input("n1?"))
n2 = int(input("n2?"))
soma=0

if(n1>n2):
  aux = n2
  n2=n1
  n1=aux
  
for i in range(n2):
  soma = soma + n1
  
print("Soma sucessivas: ", soma)
  
