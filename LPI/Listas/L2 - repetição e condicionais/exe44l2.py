# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 44: (UEA/EST 2013.2) A serie de Fetuccine e gerada da seguinte forma:
#             os dois primeiros termos sao fornecidos pelo usuario; a partir dai, os
#             termos sao gerados com a soma ou subtracao dos termos anteriores, ou
#             seja,
#             
#             F[l] = F[l]−1 + F[l]−2 para l impar.
#             F[l] = F[l]−1 - F[l]−2 para l par.
#
#             Crie um algoritmo para gerar os 17 primeiros termos desta serie, em
#             que os termos iniciais sao fornecidos pelo usuario.


antant=int(input("1termo?"))
ant=int(input("2termo?"))

if(antant > ant):
  aux = antant
  antant= ant
  ant=aux

# numero de termos=17[L:1-17], em que L pode variar entre par e impar (ex.:l=3 ou l=8)
for i in range(1,18):
  if((i%2)==0):  
    termo = ant+antant
    print(termo)
    antant=ant
    ant=termo
  else:
    termo = ant-antant
    print(termo)
    antant=ant
    ant=termo
