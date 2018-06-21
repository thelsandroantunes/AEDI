# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 37: Ao testar os efeitos da radiacao em materiais, um protocolo de experi-
#             mentos requer que (1) a amostra esteja sujeita a diferentes emissoes de
#             radiacao em intensidade aleatoria, cada uma das quais não devendo ex-
#             ceder 200 unidades; e (2) a soma da radiacao total incidente na amostra
#             nao deve exceder um limite para exposicao total, que e de 1000 unida-
#             des. Escreva um programa que simule esse experimento.

from random import randint

soma=0

print("Amostra")
while(True):
    x=randint(0,200)
    print("Radiacao: ",x)
    soma = soma + x
    if(soma > 1000):
        print("radiacao total incidente",soma-x)
        break
