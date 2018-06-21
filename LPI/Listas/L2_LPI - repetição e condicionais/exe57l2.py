# Autor: Thelsandro Antunes
# Data: 13/05/2017
# EST-UEA
# Disciplina: LP1
# Professora: Elloa B. Guedes
# 2 Lista de Exercicios (06/04/2015)
# Questao 57: (UEA/EST 2014.2) A Escola Superior de Tecnologia (EST) resolveu
#             promover um concurso para selecionar alunos para um Projeto de P&D.
#             Para tanto, os candidatos deverao realizar uma prova com 40 questoes
#             objetivas marcando suas respostas em um cartao-resposta. Para ajudar
#             a EST nesta tarefa, escreva um programa em Python que leia o cartao
#             de cada candidato e calcule sua respectiva pontuacao, sabendo-se que 
#             cada resposta certa vale 2.0 pontos e cada resposta errada -1.0 ponto
#             (menos um ponto). Vale ressaltar que o cartao-resposta de cada can-
#             didato contem a alternativa marcada para cada questao. Alem disso,
#             cada cartao-resposta e comparado com o Gabarito, o qual possui to-
#             das as alternativas corretas para cada questao.
#             Ao final o programa devera imprimir quantos pontos cada candidato obteve, 
#             e a quantidade de candidatos selecionados. Algumas observações importantes
#             sobre o problema sao apresentadas:
#
#             * A prova possui 40 questoes;
#             * O candidato devera fazer, no minimo, 35 pontos para ser selecionado;
#             * Tanto o cartao de respostas quanto o gabarito deverao ser decla-
#               rados como vetores;
#             * Apos o termino do calculo da pontuacao de cada candidato, o
#               programa devera perguntar se e desejado ler um novo cartao;
#             * O programa termina quando o usuario digitar 'N' para a pergunta
#               do item anterior.


from __future__ import print_function

def comp(x,y):
  soma=0
  for j in range(len(x)):
    if(x[j]==y[j]):
      soma = soma + 2
    else:
      soma = soma - 1
  return soma
      


gab=["a","b","c","d","e","a","b","c","d","e","a","b","c","d","e","a","b","c","d","e","a","b","c","d","e","a","b","c","d","e"]

resp = str(raw_input("Ler cartao? Sim[S] Nao[N]"))
cart=[]

k=1
while(resp != "N"):
  for i in range(40):
    print("Questao ",i+1,end=": ")
    cart.append(str(raw_input()))
  
  sel = comp(gab,cart)
  print("Pontuacao do candidato",k,end=": ")
  print(sel)
  if(sel >=35):
    print("Candidato selecionado")    
  else:
    print("Candidato NAO selecionado")    
  resp = str(raw_input("Ler novo cartao? Sim[S] Nao[N]"))
  k=k+1
