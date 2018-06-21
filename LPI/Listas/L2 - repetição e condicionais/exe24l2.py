# Autor: Thelsandro Antunes
# Data: 03/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 24: (UEA/EST 2014.3) Uma casa de cambio vende diferentes moedas para
#             brasileiros que desejam viajar para o exterior. O cliente informa a mo-
#             eda desejada e da um valor em reais para a compra. O operador do
#             caixa acessa o sistema, informa a letra inicial da moeda a ser comprada,
#             entra com o valor a ser convertido e o sistema informa o valor de conver-
#             sao para a nova moeda. Implemente um programa que simula o sistema
#             da casa de cambio. Considere que se mais de uma conversao precise ser
#             realizada, o operador do caixa executa o programa novamente. Utilize
#             a Tabela 1 para realizar as conversoes disponiveis.
#
#             Tabela 1: Tabela de conversao de moedas.
#             -----------------------------------
#             - Letra -       Moeda     - Valor -
#             -----------------------------------
#             -   E   -       Euro      - 0,31  -
#             -   D   -       Dólar     - 0,42  -
#             -   M   - Pesos Mexicanos - 5,55  -
#             -   A   - Pesos Argentinos- 2,84  -
#             -   L   -       Libras    - 0,26  -
#             -----------------------------------
#
#             Exemplos de Execucao:
#
#             Valor: 300
#             Moeda: D
#             Resultado: 126.00
#             --- FIM ---
#             Valor: 12.45
#             Moeda: M
#             Resultado: 69.09
#             --- FIM ---
#             Valor: 95.32
#             Moeda: X
#             Conversao Invalida!
#             --- FIM ---
#             Valor: -7897.123
#             Moeda: E
#             Conversao Invalida!
#             --- FIM ---

a=input()

