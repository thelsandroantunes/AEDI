# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 47: Crie um algoritmo que ajude o DETRAN a saber o total de recursos que
#             foram arrecadados com a aplicacao de multas de transito. O algoritmo
#             deve ler as seguintes informacoes para cada motorista:
#             (a) Numero da carteira de motorista (1 a 4327);
#             (b) Numero de multas;
#             (c) Valor de cada uma das multas.
#           
#             Deve ser impresso o valor da divida para cada motorista. Ao final, o
#             algoritmo deve imprimir o numero da carteira de motorista que recebeu
#             mais multas e tambem o valor total arrecadado em decorrencia das infracoes.


from __future__ import print_function

loop = True
cont = 1
soma_total = 0.0


cart = int(input("Carteira de motorista (1 a 4327): N"))
mult = int(input("Multas: "))

maior_m = mult
c=cart
while(loop):
  
  if(maior_m < mult):
    maior_M = mult
    c=cart  
    
  vt = []
  for i in range(mult):    
    print("Multa ", i+1,end=": R$")
    vt.append(float(input()))
  
  soma=0.0
  for k in vt:
    soma = soma + k
  print(" ")  
  print("Divida do motorista ",end="")
  print(cont, end=": R$")
  print(soma)  
  
  soma_total= soma_total + soma
  cont += 1
  
  sair = int(input("sair[0] ou continuar[!=0]: "))
  if(sair == 0):
    loop = False
  else:
    cart = int(input("Carteira de motorista (1 a 4327): N"))
    mult = int(input("Multas: "))


print("Recebeu mais Multas -> carteira de motorista N:", c)
print("Valor toral arrecadado: R$", soma_total)
