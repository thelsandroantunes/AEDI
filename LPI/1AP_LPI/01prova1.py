n=int(input("quantidade de integrantes?"))
pace_time=0
at_rap=0
k=0
tempoT=0
distT=0


for i in range(n):
  val=True
  print("integrante :",i+1)
  while(val):
    d=int(input("distancia: "))
    t=int(input("tempo: "))

    if((d>0) and (t>0)):
      pace=float(d)/(float(t)/60)
      if(at_rap < pace):
        at_rap=pace
        k=i+1
        tempoT = tempoT + t
        distT = distT + d
        val= False
      else:
        print(" distancia e tempo inavlidos")
        val=True
        
pace_time = float(distT)/(float(tempoT/60))

print("integrante mais rapido: ",k)
print("pace do time: ", pace_time)