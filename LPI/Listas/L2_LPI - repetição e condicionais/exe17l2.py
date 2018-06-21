# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 17: Ler varios numeros ate que o usuario forneca o numero −999 .
#             Para cada numero lido, imprimir seus divisores exatos. Ao final, 
#             informe a media dos numeros lidos.

n=int(input())
t=0
cont=0
while(n !=-999):
  t = t + n
  cont +=1
  for i in range(1,n+1):
    if(n%i==0): 
      print("div ", i)
  n=int(input())

print("media:", float(t)/float(cont))
