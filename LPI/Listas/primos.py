from __future__ import print_function

n = int(input("n?"))
ehprimo = True

if((n<=1) or ((n%2==0) and (n!=2))):
  ehprimo = False
else:
  for d in range(3,(n//2)+1,2):
    if((n%d)==0):
      ehprimo=False
      break

if(ehprimo):
  print("Eh primo")
else:
  print("Nao e primo")


