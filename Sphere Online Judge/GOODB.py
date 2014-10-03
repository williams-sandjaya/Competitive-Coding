# works in python 2.7

nCr = [[0 for x in xrange(301)] for x in xrange(301)] 
for i in range (0,301):
    nCr[i][0]=1
    nCr[i][i]=1
for i in range (1,301):
    for j in range (1,301):
        if i!=j:
            nCr[i][j] = nCr[i-1][j] + nCr[i-1][j-1]
 
 
n,w,t,r=map(int,raw_input().split(' '))
print ((nCr[n][w]% 1000000007)*(nCr[n-w][t]% 1000000007)*(nCr[n-w-t][r] % 1000000007))% 1000000007 
