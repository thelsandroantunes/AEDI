from __future__ import print_function

n = int(input("N?"))

if(n>=1):
  print("0", end=" ")
if(n>=2):
  print("1", end=" ")

antant = 0
ant = 1
  
for i in range(n-2):
  termo = antant+ant
  print(termo, end=" ")
  antant=ant
  ant=termo
