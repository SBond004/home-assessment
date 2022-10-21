import random
log = input("Enter your login >>  ")
passw = ''
for i in range (8):
    passw = passw + random.choice(list('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'))
if passw.islower() == True:  
    print(passw, '!!!Password is NOT secure!!! Try again.')
elif passw.isdigit() == True:
    print(passw,'!!!Password is NOT secure!!! Try again.')
elif passw.isalpha() == True:
    print(passw, '!!!Password is NOT secure!!! Try again.')
else: print('Hello, ', '>', log, '<', ',your password is: ', passw)