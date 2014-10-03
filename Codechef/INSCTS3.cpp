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
	long long test=0,i,j,k,n,sum=0,ans=0,al[26];
	string arr="abcdefghijklmnopqrstuvwxyz";
	scanf("%lld",&test);
	while(test--)
	{
		string str;
		cin>>str;
		for(i=0;i<26;i++)
			al[i]=0;
		for(i=0;str[i]!='\0';i++)
			al[str[i]-'a']++;
			
		for(i=0;i<26;i++)
			if(al[i]%2==1)
				for(j=0;j<al[i];j++)
					cout<<arr[i];
					
		for(i=0;i<26;i++)
			if(al[i]%2==0)
				for(j=0;j<al[i];j++)
					cout<<arr[i];
		cout<<endl;
	}
}
