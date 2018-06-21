# Autor: Thelsandro Antunes
# Data: 01/04/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 11: Dado um numero natural, verifique se ele e o produto de tres numeros
#             sucessivos. Exemplo: 120 = 4 * 5 * 6 .


n=int(input())
i=1
ver=0
for i in range(100):
  c=i*(i+1)*(i+2)
  if(n==c):
    print('Eh produto de:'+str(i)+'*'+str(i+1)+'*'+str(i+2))
    ver=0
    break
  else:
    ver=1
if(ver==1):
  print('Nao eh produto de sequencia')
