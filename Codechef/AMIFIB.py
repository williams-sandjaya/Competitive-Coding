import sys,math,os
def sqrt(x):
    n=int(x)
    if n==0:
        return 0
    a,b=divmod(n.bit_length(),2)
    x=2**(a+b)
    while True:
        y=(x+n//x)//2
        if y>=x:
            return x
        x=y

t=input()
t=int(t)
for i in range(0,t):
    l=sys.stdin.readline()
    if l=="":
        break
    n=int(l)
    m=5*n*n+4
    n=m-8
    if sqrt(m)*sqrt(m)==m or sqrt(n)*sqrt(n)==n:
        print("YES")
    else:
        print("NO")
