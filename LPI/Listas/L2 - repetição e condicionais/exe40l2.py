# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 40: Uma das maneiras de estimar a raiz quadrada de um numero e utili-
#             zando o algoritmo de Newton. Para este algoritmo, o palpite inicial e
#             de p = n/2. Em seguida, o algoritmo calcula um novo palpite, dado
#             por p = (p + n/p)/2. O algoritmo continua a fazer estimativas ate que
#             o modulo da diferenca entre p e n e menor do 0.0001 . Escreva e teste
#             uma funcao que implemente este algoritmo.

n=int(input("n?"))
p=n/float(2)

while(True):
    p=(p+(n/float(p)))/float(2)
    if(((p**2)-n) < (0.0001)):
        break
print("%.2f"%p)
