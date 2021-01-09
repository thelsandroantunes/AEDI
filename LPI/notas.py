#coding: utf-8

# Autor: Thelsandro Antunes
# Data: 09/01/2020
# EST-UEA

"""
Faça um programa em Python para:
    • Ler um inteiro N que representa o total de alunos de uma turma.
    • Ler um vetor (lista) de N nomes de alunos.
    • Ler dois vetores (N1, N2) de notas dos alunos. Considere que as notas estão nos vetores em
        posições respactivas aos nomes.
    ◦ Usar a sequência de leitura NOME-NOTA1-NOTA2.
    • Criar um terceiro vetor de notas contendo a média de cada aluno, considere que a posição
        da média no vetor de Médias é respectiva ao nome do aluno.
    • Ordenar os vetores pelo nome dos alunos, em ordem alfabética. Mantenha as notas de
        cada aluno na posição respectiva ao seu nome. Escrever os nomes e as médias após a
        ordenação.
    • Informar o total de alunos com nota acima ou igual à média da turma.
    • Informar o nome dos 10% dos alunos com maior média, em ordem alfabética.
OBS: Ler e escrever estritamente os valores lidos ou calculados, sem qualquer formatação de tela,
exceto a média que deve ser escrita com exatamente uma casa decimal.
"""

def alfa_ordem_01(aMedia, nMedia):
    a = 1
    while (a):

        a = 0

        for i in range(0, len(aMedia) - 1):

            if (aMedia[i] > aMedia[i + 1]):
                tempA = aMedia[i]
                tempN = nMedia[i]

                aMedia[i] = aMedia[i + 1]
                nMedia[i] = nMedia[i + 1]

                aMedia[i + 1] = tempA
                nMedia[i + 1] = tempN

                a = 1


def alfa_ordem_02(aMedia, nMedia, c):
    a = 1
    while a:
        a = 0
        for i in range(0, c - 1):

            if nMedia[i] < nMedia[i + 1]:

                tempN = nMedia[i]
                tempA = aMedia[i]

                nMedia[i] = nMedia[i + 1]
                aMedia[i] = aMedia[i + 1]

                nMedia[i + 1] = tempN
                aMedia[i + 1] = tempA

                a = 1
            elif nMedia[i] == nMedia[i + 1]:

                if aMedia[i] > aMedia[i + 1]:
                    tempA = aMedia[i]
                    aMedia[i] = aMedia[i + 1]
                    aMedia[i + 1] = tempA

                    a = 1


def acimaMedia(m, mt, tam):
    c = 0
    for j in range(0, tam):
        if m[j] > mt:
            c += 1
    return c


def imprimir(aluno, media, tam, c):
    for i in range(0, tam):
        print("%s" % aluno[i])
        print("%0.1f" % media[i])
    print(c)


def imprimirAlunoMedia(am, p):
    for i in range(0, int(p)):
        print("%s" % am[i])


i = 0
somaMedia = 0
mediaTurma = 0.0
contar = 0
n = int(input())
aluno = [None] * n
nota1 = [0.0] * n
nota2 = [0.0] * n
media = [0.0] * n

while i < n:
    aluno[i] = raw_input()
    nota1[i] = float(input())
    nota2[i] = float(input())
    media[i] = float((nota1[i] + nota2[i]) / 2)
    somaMedia += media[i]
    i += 1

mediaTurma = float(somaMedia / n)

aMedia = []
nMedia = []
contar = int(acimaMedia(media, mediaTurma, n))

i = 0
while i < n:
    if media[i] > mediaTurma:
        aMedia[contar:] = [aluno[i]]
        nMedia[contar:] = [media[i]]
    i += 1

porcento = n * 0.1

alfa_ordem_01(aluno, media)
alfa_ordem_02(aMedia, nMedia, contar)
imprimir(aluno, media, n, contar)
imprimirAlunoMedia(aMedia, porcento)
