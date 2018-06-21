# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 21: Escreva um programa para determinar todos os numeros palindromos
#             perfeitos do intervalo [1000, 9999] .
#             Um numero e palindromo perfeito quando pode ser lido da direita 
#             para a esquerda sem alterar seu valor,tal como 1661 .

print("Numeros palindromos entre 1000 a 9999")
for i in range(1000,9999):
  letter = str(i)
  teste =""
  
  for j in range(len(letter)-1,-1,-1):
    teste += letter[j]
    
  if(teste == letter):
    print letter
