m1 = [[1,3,7],[4,-2,0]]
m2 = [[10,20,-7],[5,14,3]]

#Funcao pedida no exercicio
def somaMatrizes(m1,m2):
    listsoma = []

    for i in range(len(m1)):
        li=[]
        for j in range(len(m1[0])): #definir o tamanho da sublista
            aux = m1[i][j] + m2[i][j]
            li.append(aux)
        listsoma.append(li)
    print(listsoma)
    return listsoma

assert somaMatrizes(m1,m2) == [[11,23,0],[9,12,3]]
