n=int(input())
antp=0
pen=1
ult=1
if (n>1):
  print("0")
if(n>2):
  print("1")
if (n>3):
  print("1")

for i in range(n-3):
    atual= antp+ pen + ult
    print(atual)
    antp= pen
    pen=ult
    ult= atual