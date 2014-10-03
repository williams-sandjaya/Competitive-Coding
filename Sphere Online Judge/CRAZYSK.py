import math
def method():
    t = raw_input()
    t = int(t)
    while t>0:
            a=raw_input()
            b=a.split(" ")
            x=int(b[0])
            xb=x
            s=0
            n=int(b[1])
            while(x>=n and x):
                s += x/n
                x = x/n + x%n  
            print xb+s 
            t = t - 1
    return 0
 
method()
