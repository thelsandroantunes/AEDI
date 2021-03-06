# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 23: (UEA/EST 2014.1) A escala de cores RGB (do ingles, Red Green Blue
#             - Vermelho, Verde e Azul) é uma maneira de definir e utilizar cores em
#             um computador. O usuario informa tres parametros: vermelho (R),
#             verde (G), e azul (B). Cada um desses tres numeros devem estar no
#             intervalo [0,255]. 
#             Faca um programa em Python que leia triplas de parametros R, G e B e
#             informe a cor correspondente, levando em conta as regras a seguir:
#
#             * Quando R = 0, G = 0 e B = 0, a cor correspondente e Preto;
#             * Quando R = 255, G = 255 e B = 255, a cor correspondente e Branco;
#             * Quando R e o maior valor de todos, a cor e um Tom de Vermelho;
#             * Quando G e o maior valor de todos, a cor e um Tom de Verde;
#             * Quando B e o maior valor de todos, a cor e um Tom de Azul;
#             * Quando R = G = B, a cor e um Tom de Cinza;
#             * Para os demais casos, exiba a mensagem [Outra cor!].
#
#             Veja a seguir alguns exemplos de execucoes:
#
#             R: 2
#             G: 0
#             B: 155
#             Cor: Tom de Azul
#             --- FM----
#             R: 0
#             G: 0
#             B: 0
#             Cor: Preto
#             --- FIM----
#             R: 300
#             G: 100
#             B: 256
#             Valores Inválidos
#             --- FIM----
#             R: 1
#             G: 1
#             B: 1
#             Cor: Tom de Cinza
#             --- FIM ---

print("RGB-Red Green Blue")
print("R[0,255]")
print("G[0,255]")
print("B[0,255]")

print("Informe a Tripla")
r=int(input("R?"))
g=int(input("G?"))
b=int(input("B?"))

if((r>255) or (r<0)) or ((g>255) or (g<0)) or ((b>255) or (b<0)):
  print("Valores invalidos")
else:
  if((r==0) and (g==0) and (b==0)):
    print("Cor: Preto")
  elif((r==255) and (g==255) and(b==255)):
    print("Cor: Branco")
  elif((r>g) and (r>b)):
    print("Cor: Tom de Vermelho")
  elif((g>r) and (g>b)):
    print("Cor: Tom de Verde")
  elif((b>g) and (b>r)):
    print("Cor: Tom de Azul")
  elif((r==g) and (r==b) and (g==b)):
    print("Cor: Tom de Cinza")
  else:
    print("Outra cor!")
