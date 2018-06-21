# Autor: Thelsandro Antunes
# Data: 13/07/2017
# EST-UEA
# Disciplina: LP1
# Lista de Vetores e Matrizes
# Questao 16: Crie uma funcao para calcular e imprimir os n primeiros numeros de Tribonacci.
#             "A serie de Tribonacci consiste em: 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504,... 
#              Para calcula-la o primeiro elemento vale 1, o segundo elemento vale 1, o terceiro #              elemento vale 2, e dai por diante. Assim, o i-esimo elemento vale o (i-1)-esimo #              elemento somado ao (i-2)-esimo elemento somado ao (i-3)-esimo elemento. 
#              Exemplo: 13=7+4+2. Observe que n deve ser positivo."


from __future__ import print_function

def tribonacci(n):
  
  antp=1
  pen=1
  ult=2
  if (n>1):
    print("1", end=" ")
  if(n>2):
    print("1", end=" ")
  if (n>3):
    print("2", end=" ")

  for i in range(n-3):
      atual= antp+ pen + ult
      print(atual, end=" ")
      antp= pen
      pen=ult
      ult= atual


n=int(input("numero?"))
while(n < 0):
  n=int(input("numero?"))

print("----------")
print("Tribonacci")
tribonacci(n)
