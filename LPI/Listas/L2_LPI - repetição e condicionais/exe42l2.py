# Autor: Thelsandro Antunes
# Data: 12/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 42: (UEA/EST 2013.2) Escreva um programa que leia numeros de ponto
#             flutuante e realize a soma e o produto destes numeros, imprimindo
#             o resultado parcial das somas e multiplicacoes a cada valor lido.
#             A condição de parada para leitura dos numeros ocorre quando um valor
#             nulo for fornecido. Apos a leitura da condicao de parada, imprima o
#             resultado final das somas e dos produtos.


n=int(input("n?"))
sa=0
sp=1
while(n!=0):
    sa=sa+n
    sp=sp*n
    print("soma: ",sa)
    print("produto: ",sp)
    n=int(input("n?"))
print("Total adicao: ",sa)
print("Total multiplicacao: ",sp)
