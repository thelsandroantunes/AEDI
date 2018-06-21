from random import randint

#Função pedida no exercício
def coluna(matriz, i):
    newlista = []
    for j in range(len(matriz)):
        aux = matriz[j][i]
        newlista.append(aux)
    print(newlista)#teste de impressão
    return newlista

#complemento para rodar a função
nlin = int(input("linhas?"))
ncol = int(input("colunas?"))
m=[]
for i in range(nlin):
    li = []
    for j in range(ncol):
        aux = randint(0,100) #foi utilizado uma biblioteca random que gera numeros aleatorios
        li.append(aux)
    m.append(li)

x=[]

i = int(input("indice?"))
x = coluna(m,i)
print(x)

