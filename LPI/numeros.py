#coding: utf-8

# Autor: Thelsandro Antunes
# Data: 09/01/2020
# EST-UEA

"""
Faça um programa em Python que leia um número inteiro maior que zero, que representa o total de
valores que serão tratados no seu programa. Para cada um dos valores inteiros lidos informar, em
uma única linha:
    1. Se é par ou ímpar
    2. Se é primo
    3. Seu quadrado
    4. Seu fatorial
E, ao final, informar (uma saída por linha):
    1. O total de números pares
    2. O total de números ímpares
    3. O total de números primos
    4. A média aritmética dos números (formatar a saída com duas casas decimais)
    5. A soma de todos os quadrados
    6. O maior número lido
    7. O menor número lido
"""

n = int(input())

soma = 0
maior = 0
menor = 0

par = 0
impar = 0

primos = 0
quad = 0

for i in range(n):

    x = int(input())

    maior = x if i == 0 else max(x, maior)
    menor = x if i == 0 else min(x, menor)

    temp = ""
    if not x % 2:
        temp += "Par "
        par += 1
    else:
        temp += "Impar "
        impar += 1

    ehPrimo = True
    j = 2
    while (j * j <= x):
        if not x % j:
            ehPrimo = False
            break
        j += 1

    if x < 2:
        ehPrimo = False
    if ehPrimo:
        temp += "Primo "
        primos += 1

    temp += str(x*x) + " "
    fat = 1
    for i in range(2, x + 1):
        fat *= i

    if not x: fat = 1

    soma += x
    quad += x * x

    temp += str(fat)
    print(temp)

print(par)
print(impar)
print(primos)
print("%.2f" % (soma / n if n > 0 else 0))
print(quad)
if (n > 0):
    print(maior)
    print(menor)
