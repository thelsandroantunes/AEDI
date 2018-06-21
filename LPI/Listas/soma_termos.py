from __future__ import print_function

n=int(input("n?"))
soma=0.0

for i in range(1,n+1):
  termo=float(1/float(i))
  print(termo, end=" ")
  soma=soma+termo

print("Soma dos termos: %.2f" %soma)
