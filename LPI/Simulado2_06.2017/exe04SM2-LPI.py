lista1 = [[10,20],[1,2,3,4],[-5,20,20]]

#FunCAo pedida no exercIcio
def remove_listas_com_todos_menores(lista,limite):

    newlista = []
    lin = len(lista)    

    for i in range(lin):
      col=len(lista[i])
      soma=0
      
      for j in range(col):
        soma = soma + lista[i][j]
      
      if(soma >= limite):
        newlista.append(lista[i])
    
    #print(newlista)
    return newlista


remove_listas_com_todos_menores(lista1,11)

assert lista1 == [[10,20],[-5,20,20]]
