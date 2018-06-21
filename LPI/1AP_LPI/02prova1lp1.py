x=int(input())
y=int(input())
n=int(input())

if(x>y):
  aux=y
  y=x
  x=aux
print(x)
print(y)
aux=0
while(aux<=n):
  aux=x+y
  if(aux<=n):
    print(aux)
  x=y
  y=aux