n=int(input())
antant=0
ant=1

if n>=1 :
  print("0")
if n>=2 :
  print("1")
for i in range(n-2):
  termo = antant+ant
  print(termo)
  antant=ant
  ant=termo
