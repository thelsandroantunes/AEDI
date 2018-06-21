# Autor: Thelsandro Antunes
# Data: 01/04/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 13: Escreva um programa para ler dois números inteiros e determinar se
#             eles sao primos gemeos. Dois numeros sao primos gemeos se eles sao
#             primos e existe uma diferenca de dois (2) entre eles. 
#             Exemplo: 11 e 13 sao primos gemeos.



a=0
b=0
p=0
for k in range(2):
  n=int(input())
  if(k==0):
    a=n
  if(k==1):
    b=n
  
  if(n==1 or n==2):
    print('Eh primo')
    p=p+1
  else:
    count=0
    for i in range(n):
      i=i+1
      if(n%i==0):
        count=count+1
    if(count==2):
      print('Eh primo')
      p=p+1
    else:
      print('Nao eh primo')
  
if(p==2):
  if((b-a==2) or (a-b==2)):
    print('Primos gemeos')
  else:
    print('Nao sao primos gemeos')
