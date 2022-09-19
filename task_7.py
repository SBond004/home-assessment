#Ex.1
array = [i for i in range (-9, 10)]
print (array)

for i in range (-9, 10, 1):array [i] = "Python"
print (array)

N =  (input("Enter what you want to see "))
for i in range (-9, 10, 1):array [i] = N
print (array)

#Ex.2
def getAboveZero(list):
    for x in list:
        if x>0:
            #print (x)
            return x
    for y in list: 
        if  y<0 and x<0:
            return -1   
      
def getAboveNum (Num, list2):
    for k in list2:
        if k>Num:
            return k
    for l in list2:
        if l<Num and k<Num:
            return -1

def delAboveZero (list3):
    
    for a in list3:
        if a>0:
            list3.remove(a)
            return a

    for b in list3:
        if b<0 and a<0:
            return None   
#Ex.3
import arracrobatics as h
h.getAboveNum (15, list2 =[5, 15, 96, -28, -302])
