# Autor: Thelsandro Antunes
# Data: 01/04/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 14: Ler 20 numeros do teclado e acumular a soma dos quadrados destes.


soma=0
for i in range(20):
  n=float(input())
  soma = soma +(n**2)
print(soma)
