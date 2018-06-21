n=int(input())
ehprimo=True

if(n<=1 or (n%2==0 and n!=2)):
  ehprimo=False
else:
  for d in range(3,(n//2)+1,2):
    if(n%d==0):
      ehprimo=False
      break

if ehprimo:
  print("Eh primo")
else:
  print("Nao eh primo")