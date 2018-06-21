# Autor: Thelsandro Antunes
# Data: 29/06/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 3 Lista de Exercicios (09/04/2015)
# Questao 10: Implementar a funcao inverte que recebe um numero inteiro de quatro
#             digitos e positivo como parametro e retorna este numero escrito ao
#             contrario. Ex: inverte(4312) == 2134 .

def inverte(n):
  
  letras = str(n)
  tam = len(letras)
  
  aux = letras[tam-1]
  for i in range(1,tam):
    aux = aux + letras[tam-1-i]    
    
  return int(aux)

  
num = int(input("numero?"))

while((num<0) or (num<1000) or (num>9999)):
  num = int(input("numero?"))
  
print("Valor Invertido: %d" %(inverte(num)))
