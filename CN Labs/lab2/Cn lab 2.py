#Even Parity
n=int(input("Enter an integer:"))
c=0
n=bin(n)
for i in n:
    if(i==1):
        c=c+1
    else:
        pass
if(c%2!=0 and c==0):
    print('1')
else:
    print('0')
    
    
#Odd parity
n=int(input("Enter an integer:"))
c=0
n=bin(n)
for i in n:
    if(i==1):
        c=c+1
    else:
        pass
if(c%2==0):
    print('1')
else:
    print('0')