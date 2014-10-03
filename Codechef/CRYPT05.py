fib = []
fib.append(0)
fib.append(1)
for i in range(2,4785):
	fib.append(fib[i-1]+fib[i-2])
 
while 1:
	n = int(input())
	if n == 0:
		break
	ans = fib[n]
	print(ans)	