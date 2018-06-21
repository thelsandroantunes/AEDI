pv=int(input("primeiro valor"))
sv=int(input("segundo valor"))
n=int(input("gerar valores ate: "))

antant=pv
ant=sv

if(n>=pv):
  print(pv)
if(n>=sv):
  print(sv)

for i in range(n-2):
  termo = antant+ant
  if(termo <= n):
    print(termo)
  antant=ant
  ant=termo

  if(termo > n):
   break