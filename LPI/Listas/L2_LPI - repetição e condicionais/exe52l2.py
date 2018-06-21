# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 52: Algumas unidades de medida sao pouco conhecidas, embora importan-
#             tes em determinados meios. No caso do Sistema Imperial, por exem-
#             plo, para medicoes de terrenos, uma legua equivale a 5km; uma mi-
#             lha equivale a 2km e uma jarda equivale a um metro. Assim, dado
#             como entrada um valor inteiro em kilometros, construa um algoritmo
#             em Python que informe a quantas leguas, milhas e jardas essa entrada
#             equivale. Veja os exemplos.
#
#             * Entrada 1: 2038
#             * Saída 1: 407 léguas, 1 milhas e 1000 jardas
#             * Entrada 2: 3
#             * Saída 2: 0 léguas, 1 milha e 1000 jardas
#             * Entrada 3: 19
#             * Saída 3: 3 léguas, 2 milhas e 0 jardas


from __future__ import print_function

n=int(input("Entrada: "))

leguas = n/5
print(leguas, end="Leguas ")
milhas = (n%5)/2
print(milhas, end="Milhas ")
jardas = ((n%5)%2)/0.001
print(int(jardas), end="Jardas")
