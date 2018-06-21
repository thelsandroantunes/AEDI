s=int(input())
p=str(s)
v=True

for char in range(len(p)):
   n=int(p[char])
   
   if(char%2==0):
     if(n%2==0):
       v=False
       break
   elif(char%2==1):
     if(n%2==1):
       v=False
       break
if(v):
  print("Seguro")
else:
   print("Inseguro")