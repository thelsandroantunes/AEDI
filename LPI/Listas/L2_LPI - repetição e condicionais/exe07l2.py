# Autor: Thelsandro Antunes
# Data: 31/03/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 07: Faca um programa que leia a idade de uma pessoa e informe sua classe
#             eleitoral: nao eleitor (abaixo de 16 anos), eleitor obrigatorio (entre 18 e
#             65 anos) e eleitor facultativo (entre 16 e 18 anos e acima dos 65 anos).



id=int(input())

if(id<16):
  print("nao eleitor")
elif(18<=id<=65):
  print("eleitor obrigatorio")
else:
  print("eleitor facultativo")
