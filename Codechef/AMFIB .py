import sys

a=[]
a.append(0)
a.append(1)
for i in range(2,10000):
	a.append(a[i-1]+a[i-2])

t=int(sys.stdin.readline())
for i in range(0,t):
	n=int(sys.stdin.readline())
	if n in a:
		print "YES"
	else:
		print "NO"