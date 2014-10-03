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
	long long test=0,i,j,x,maxin,ind,y,k,n,sum=0,ans=0;
	scanf("%lld",&test);
	while(test--)
	{
		cin>>n;
		maxin=0,ind=0;
		long long y[n];
		for(i=0;i<n;i++)
		{
			cin>>x>>y[i];
			maxin=max(maxin,x);
			if(maxin==x) ind=i+1;
		}
		for(i=0;i<n;i++)
		{
			if(i==ind-1)
				continue;
			if(y[i]>=maxin)
			{
				cout<<-1<<endl;
				break;
			}	
		}
		if(i==n)
			cout<<ind<<endl;
	}
}
