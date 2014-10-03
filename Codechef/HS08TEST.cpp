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
	long long test=0,i,j,k,n,sum=0,ans=0;
	int cash;
	float balance;
	scanf("%d%f", &cash, &balance);
	
	if(cash%5 != 0)
		printf("%0.2f", balance);
	else
	{ 
		if((float)cash <= balance - 0.5)
			printf("%0.2f", balance - (float)cash - 0.5);
		else
			printf("%0.2f", balance);
	}
}

