# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 12: Crie uma funcao que recebe quatro variaveis de ponto flutuante e que
#             imprime estas variaveis em ordem crescente.

from __future__ import print_function

def ordemc(a,b,c,d):
  
  #PRIMEIRA
  if(a<b) and (a<c) and (a<d) : 
    print(a, end=" ") # A
    
    if(b<c) and (b<d): 
      print(b, end=" ") # B
      
      if(c<d) :  
        print(c, end=" ") # C
        print(d, end=" ") # D
      else: 
        print(d, end=" ") # D
        print(c, end=" ") # C
        
    elif(c<b) and (c<d) :  
      print(c, end=" ") # C
      
      if(b<d) :
        print(b, end=" ") # B
        print(d, end=" ") # D
      else:
        print(d, end=" ") # D
        print(b, end=" ") # B
        
    elif(d<b) and (d<c):
      print(d, end=" ") # D
      
      if(b<c):
        print(b, end=" ") # B
        print(c, end=" ") # C
      else:
        print(c, end=" ") # C
        print(b, end=" ") # B
      
      
  #SEGUNDA        
  elif(b<a) and (b<c) and (b<d) :
    print(b, end=" ") # B
    
    if(a<c) and (a<d): 
      print(a, end=" ") # A
      
      if(c<d) :  
        print(c, end=" ") # C
        print(d, end=" ") # D
      else: 
        print(d, end=" ") # D
        print(c, end=" ") # C
        
    elif(c<a) and (c<d) :  
      print(c, end=" ") # C
      
      if(a<d) :
        print(a, end=" ") # A
        print(d, end=" ") # D
      else:
        print(d, end=" ") # D
        print(a, end=" ") # A
        
    elif(d<a) and (d<c):
      print(d, end=" ") # D
      
      if(a<c):
        print(a, end=" ") # A
        print(c, end=" ") # C
      else:
        print(c, end=" ") # C
        print(a, end=" ") # A
    
    
  #TERCEIRA  
  elif(c<a) and (c<b) and (c<d) :
    print(c, end=" ") # C
    
    if(a<b) and (a<d): 
      print(a, end=" ") # A
      
      if(b<d) :  
        print(b, end=" ") # B
        print(d, end=" ") # D
      else: 
        print(d, end=" ") # D
        print(b, end=" ") # B
        
    elif(b<a) and (b<d) :  
      print(b, end=" ") # B
      
      if(a<d) :
        print(a, end=" ") # A
        print(d, end=" ") # D
      else:
        print(d, end=" ") # D
        print(a, end=" ") # A
        
    elif(d<a) and (d<b):
      print(d, end=" ") # D
      
      if(a<b):
        print(a, end=" ") # A
        print(b, end=" ") # B
      else:
        print(b, end=" ") # B
        print(a, end=" ") # A
  
  #QUARTA  
  elif(d<a) and (d<b) and (d<c) :
    print(d, end=" ") # D
    
    if(a<b) and (a<c): 
      print(a, end=" ") # A
      
      if(b<c) :  
        print(b, end=" ") # B
        print(c, end=" ") # C
      else: 
        print(c, end=" ") # C
        print(b, end=" ") # B
        
    elif(b<a) and (b<c) :  
      print(b, end=" ") # B
      
      if(a<c) :
        print(a, end=" ") # A
        print(c, end=" ") # C
      else:
        print(c, end=" ") # C
        print(a, end=" ") # A
        
    elif(c<a) and (c<b):
      print(c, end=" ") # C
      
      if(a<b):
        print(a, end=" ") # A
        print(b, end=" ") # B
      else:
        print(b, end=" ") # B
        print(a, end=" ") # A
  
a = float(input("num1?")) 
b = float(input("num2?"))
c = float(input("num3?"))
d = float(input("num4?"))

ordemc(a,b,c,d)
