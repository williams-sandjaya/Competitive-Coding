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
using namespace std;
long long mod = 1000000007;

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

int main()
{
	long long test=0,i,j,k,n,sum=0,ans=1,count,a[3],diff;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
        sort(a, a+3);
        if(a[2] > a[0] + a[1])
            ans = 1;
        else
        {
            diff = (a[0] + a[1] + a[2]) - 3;
            if(diff & 1) // diff is odd
                ans = 0;
            else
                ans = 1;
        }
        if(ans)
            printf("Alice\n");
        else
            printf("Bob\n");
	}
}
