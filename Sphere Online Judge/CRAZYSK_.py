import math
def method():
    t = raw_input()
    t = int(t)
    while t>0:
            a=raw_input()
            b=a.split(" ")
            n=int(b[0])
            x=int(b[1])
            if((n%(x-1))!=0):
                ans = n+(n/(x-1))
            else:
                ans = (n+(n/(x-1)))-1
            print ans   
            t = t - 1
    return 0
 
method()
