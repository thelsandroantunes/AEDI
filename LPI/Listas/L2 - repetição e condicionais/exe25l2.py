# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 25: (UEA/EST 2013.2) Escreva um algoritmo que leia um valor inteiro que
#             representa um ano (aceite apenas valores positivos) e informe se o ano
#             e bissexto ou nao. As regras para determinar se um ano e bissexto sao:
#             * Sao bissextos todos os anos multiplos de 400, p.ex.: 1600, 2000,
#               2400, 2800 . . .
#             * Sao bissextos todos os multiplos de 4 e nao multiplos de 100, 
#               p.ex.: 1996, 2004, 2008, 2012, 2016 . . .
#             * Nao sao bissextos todos os demais anos.

ano=int(input())
while(ano<0):
    ano=int(input())
if(ano % 400 == 0):
    print("Ano bissexto")
elif((ano%4==0) and (ano%100 != 0)):
    print("Ano bissexto")
else:
    print("Nao bissexto")
