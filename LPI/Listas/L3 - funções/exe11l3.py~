# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 11: Implemente um programa, utilizando Python, que leia tres numeros
#             reais. Crie uma funcao que determine se os tres numeros lidos formam
#             um triangulo ou nao. Em caso afirmativo, verifique se o triangulo pode
#             ser classificado da seguinte forma:
#             (1). triangulo escaleno;
#             (2). triangulo isosceles;
#             (3). triangulo equilatero.


def existe(a,b,c):
  if((a+b>c) and (b+c>a) and (c+a>b)):
    e = True
  else:
    e = False
    
  return e
 
def verifica(a,b,c):
  
  eh = -1
  
  if(a==b and a!=c) or (b==c and a!=c) or (a==c and b!=c):    
      eh = 1
  elif(a==b and a==c and b==c):
    eh = 0
  else:
    eh 
    
  return eh

  
a = float(input("num1?"))
while(a<1):
  a = float(input("num1?"))
  
b = float(input("num2?"))
while(b<1):
  b = float(input("num2?"))

c = float(input("num3?"))
while(b<1):
  b = float(input("num3?"))


if existe :
  
  if verifica(a,b,c) == 0 :
    print("Triangulo Equilatero")
  elif verifica(a,b,c) == 1 :
    print("Triangulo Isosceles")
  else:
    print("Triangulo Escaleno")
    
else:

  print("NAO EXISTE TRIANGULO")  
