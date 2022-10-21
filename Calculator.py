x = float(input("First number  :>> "))
oper = input("What you want to do with this numbers? Choose +, -, *, or / >>  ")
y = float(input("Second number :>> "))

result = None
if oper == "+":
    result = x+y
elif oper == "-":
    result = x-y
elif oper == "*":
    result = x*y
elif oper == "/":
    result = x/y
else:
    print('ERROR')
if result is not None:
    print (x, oper, y, "=", result)