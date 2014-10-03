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
#include<string>
#include<cstring>
#include <deque>
#include <iomanip>
#include <map>
#include <set>
#include <stack>
#include <stdlib.h>
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

long long binary_exponentiation(long long a, string str, long long mod)
{
	long long i,j,prod=a;
	while(str[i]!='1')
		i++;
	for(j=i+1;str[j]!='\0';j++)
	{
		prod=(prod*prod)%mod;
		if(str[j]=='1')
			prod=(prod*a)%mod;
	}
	return prod;
}

int main()
{
	long long test=0,i,j,k,n,c,sum=0,ans=0;
	string str,str1;
	scanf("%lld",&test);
	while(test--)
	{
		cin>>n;
		str="";str1="";
		for (c = 19; c >= 0; c--)
		{
		    k = n >> c;
		    if (k & 1)
		      str+="1";
		    else
		      str+="0";
		}
		
		unsigned long long ar[20],big=10000000000000000000;
		for(i=0;i<=19;i++)
		{
			ar[i]=big;
			big=big/10;
		}
		unsigned long long power=0;
		for(i=0;i<=19;i++)
			power+=(unsigned long long)(str[i]-'0')*ar[i];
			
		for (c = 63; c >= 0; c--)
		{
		    k = power >> c;
		    if (k & 1)
		      str1+="1";
		    else
		      str1+="0";
		}

		ans=binary_exponentiation(4,str1,mod);
		cout<<ans<<endl;
	}
}
