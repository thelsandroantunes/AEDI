lista1=[0,1,2,3,4,5,6]
lista2=[2,3,5,7,11,13,17]

#Função pedida no exercício
def filtraLista(num, lista):
    newlista = []

    for i in range(len(lista)):
        if(i%num==0):
            newlista.append(lista[i])
    print(newlista)#apenas teste de impressão
    return newlista

assert filtraLista(2,lista1) == [0,2,4,6]
assert filtraLista(3,lista1) == [0,3,6]
assert filtraLista(4,lista2) == [2,11]

