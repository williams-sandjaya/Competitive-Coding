/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<bitset>
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
using namespace std;
long long mod = 1000000007,z=0,prime_upto=limit, sqrtlimit = sqrt(limit);
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
    for(long long int n=4;n<=limit;n+=2)
        sieve[n]=false;

    for(long long int n=3;n<sqrtlimit;n+=2)
        if(!sieve[n])
            for(long long int m=n*n;m<=limit;m+=(2*n))
                sieve[m]=false;

    sieve[1]=false;
}

int main()
{
	long long test=0,i,j,k,n,f=0,sum=0,sqrcounti,col,row,counti,countf,ans=0;
	scanf("%lld",&test);
	for(k=test;k>0;k--)
	{
		cin>>n;
		char arr[n][n];
		counti=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='#')
					counti++;
			}
			sqrcounti=sqrt(counti);
			f=0;
			if(sqrcounti*sqrcounti!=counti)
				printf("Case #%d: NO\n",test-k+1);
			else
			{
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(arr[i][j]=='#')
						{
							row=i;
							col=j;
							f=1;
							break;
						}
					}
					if(f==1)
						break;
				}
				countf=0;
				for(i=row;i<row+sqrcounti;i++)
					for(j=col;j<col+sqrcounti;j++)
					{
						if(arr[i][j]=='#')
							countf++;
					}
				if(countf==counti)
					printf("Case #%d: YES\n",test-k+1);
				else
					printf("Case #%d: NO\n",test-k+1);
			}	
	}
}
