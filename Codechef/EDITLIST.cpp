/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<string.h>
#include<cstring>
#include<deque>
#include<iomanip>
#include<map>
#include<set>
#include<stack>
#include<stdlib.h>
#define limit 1000000
int dp[205][205];
int ar[105],br[105];
using namespace std;
unsigned long long mod = 1000000007,z=0,prime_upto=limit, sqrtlimit = sqrt(limit);
vector<bool> sieve(limit+1, true);

long long binpow(long long val, long long deg, long long mod) // calculates and returns (val^deg) % mod
{
    if (!deg) return 1 % mod;
    if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
    long long res = binpow(val ,deg >> 1, mod);
    return (res*res) % mod;
}

long long int gcd(long long int a,long long int b) // calculates gcd of two numbers
{
	if(b%a==0)
	   return a;
	else
	   gcd(b%a,a);
}

long long prime_sieve() // Eratosthenes prime sieve
{
    for(long long int n=4;n<=limit;n=n+2)
        sieve[n]=false;

    for(long long int n=3;n<sqrtlimit;n=n+2)
        if(!sieve[n])
            for(long long int m=n*n;m<=limit;m=m+(2*n))
                sieve[m]=false;

    sieve[1]=false;
}

int main()
{
    int t,i,j,k,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&br[i]);
        for(i=0;i<=n;i++)
        	dp[i][0]=i;
        for(i=0;i<=m;i++)
        	dp[0][i]=i;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ar[i-1]==br[j-1])
					dp[i][j]=dp[i-1][j-1];
                else
                	dp[i][j]=1+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
            }
        }
        printf("%d\n",dp[n][m]);
    }
}
