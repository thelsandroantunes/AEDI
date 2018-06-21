ap1=[]
ap2=[]
medias=[]
nAlunos = 4

for i in range(nAlunos):
  nota = float(input("Nota ap1: "))
  ap1.append(nota)

for i in range(nAlunos):
  nota = float(input("Nota ap2: "))
  ap2.append(nota)

cont=0
soma=0
for i in range(nAlunos):
  medias.append((ap1[i] + ap2[i])/2)
  if medias[i] > 8.0:
    cont = cont + 1
  soma = soma + medias[i]

print("Total de alunos acima da media: ", cont)
print("Media da turma: ",soma/4)