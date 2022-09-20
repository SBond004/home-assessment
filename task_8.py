#Task 1
l = [ 1, 53, -35, 94, 2, 0, -6, 24, -4]
print (l)
min (l)
print (min(l))

def sortAsIWant(b, l):
    
    if b==True:
        l.sort()
        print (l)
    if b==False:
        l.sort (reverse=True)
        print (l)

sortAsIWant (True, l = [ 1, 53, -35, 94, 2, 0, -6, 24, -4])
print ("----------------------------------------------")
#Task2
d = {"C++": 8000, "Python": 9000, "Java": 7000 }
for k, lock in d.items():
    print (k, lock)
d1 = {"C++": {"salary" : 8000} , "Python": {"salary" : 9000}, "Java" : {"salary" : 7000} }
for k1, lock1 in d1.items():
    print (k1, lock1)
print ("-----------------------------------------------")
#Task 3
      #перший спосіб, що змінює один словник
dict1 = {'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
dict2={'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
dict1.update (dict2)
print(dict1)
    #другий спосіб, що створює новий, як результат об'єднання
print ("the second way:")
merged_dict= {**dict1, **dict2}
print (merged_dict)    