

def primo(n):
  ehprimo=True
  if(n<=1 or (n%2==0 and n!=2)):
    ehprimo=False
  else:
    for d in range(3,(n//2)+1,2):
      if(n%d==0):
        ehprimo=False
        break

  return ehprimo


n=int(input("informe um numero: "))
cont=0
maiorp=0
pos=0

while(n!=-1):
   if(primo(n)):
     if(maiorp <n):
       maiorp=n
       pos=cont
     n=int(input("informe um numero: "))
   else:
     print("Ops! ",n," nao e primo, ")
     n=int(input("informe um numero: "))

   cont+=1

print("Saida: Maior primo ",maiorp," posicao",pos)