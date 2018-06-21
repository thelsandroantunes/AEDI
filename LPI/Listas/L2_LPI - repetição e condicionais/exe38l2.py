# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 38: O dodo e uma ave nao-voadora, extinta atualmente, e que era originaria
#             da Africa. A populacao inicial de dodós em uma determinada ilha era
#             de 1.000.000 de habitantes no início de 1600. A partir desta data,
#             durante cada ano, 6% dos animais vivos no começo do ano morreram.
#             O numero de animais nascidos ao longo do ano que sobreviveram foi
#             de 1% da populacao inicial. Escreva um programa em Python que imprime
#             o numero de nascimentos, mortes e o total da populacao por ano, a
#             partir de 1600 . O programa encerra sua execucao quando a populacao
#             total cai para menos de 10% da populacao original.

pi=1000000
ai=1600

d=pi*0.1

while(True):
    
    sm=pi*0.06
    sn=pi*0.01
    print("ano %4d"%ai)
    ai=ai+1
    print("mortes: %.2f"%sm)
    print("nascimentos: %.2f"%sn)
    print("populacao: %.2f"%pi)
    pi = pi+sn-sm

    if(pi < d):
        break
    print("")
