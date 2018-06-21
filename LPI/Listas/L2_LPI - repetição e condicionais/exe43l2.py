# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 43: (UEA/EST 2013.2) Implementar uma função para calcular o valor do
#             seno de um ângulo x fornecido em radianos. O valor do sin(x) será
#             calculado pela soma dos 20 primeiros termos da soma a seguir:
#             sin(x) = x − (x**3)/3! + (x**5)/5! + (x**7)/7! +- ... .


from __future__ import print_function

def fatorial(n):
  fat=1

  for i in range(n,1,-1):
    fat=fat*i
  
  return fat

def seno(x):
  
  s = 0.0
  for i in range(1,38,4):
      f1=fatorial(i)      
      f2=fatorial(i+2)

      par = (x**i)/float(f1)      
      impar = (x**(i+2))/float(f2) 
      
      s = s + (par - impar)

  return s

g=int(input("graus?"))
rad=(g*3.1415)/float(180)

print("SENO(",g,end=" ): ")
print("%.4f"%seno(round(rad,4)))
