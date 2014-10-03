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

class player
{
	public:
		string name;
		long long shot;
		long long h;
};

bool comp(const player &x,const player &y)
{
	if(x.shot>y.shot)
		return true;
	else if(x.shot==y.shot)
	{
		if(x.h>y.h)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main()
{
	long long test=0,i,j,k,l,n,m,p,sum=0,ans=0;
	scanf("%lld",&test);
	for(i=0;i<test;i++)
	{
		cin>>n>>m>>p;
		vector<player> arr,team_a,team_b; vector<string> now_playing; player ele;
		for(j=0;j<n;j++)
		{
			cin>>ele.name>>ele.shot>>ele.h;
			arr.push_back(ele);
		}
		sort(arr.begin(),arr.end(),comp);
		for(j=0;j<arr.size();j++)
			if(j%2==0) 
				team_a.push_back(arr[j]);
			else 
				team_b.push_back(arr[j]);
		if(p!=n/2)
		{
			for(j=0;j<m;j++)
			{
				player in,out;
				out=team_a[p-1];
				in=team_a[p];
				for(l=p-1;l>0;l--)
					team_a[l]=team_a[l-1];
				for(l=p;l<team_a.size()-1;l++)
					team_a[l]=team_a[l+1];
				team_a[0]=in;
				team_a[team_a.size()-1]=out;
				out=team_b[p-1];
				in=team_b[p];
				for(l=p-1;l>0;l--)
					team_b[l]=team_b[l-1];
				for(l=p;l<team_b.size()-1;l++)
					team_b[l]=team_b[l+1];
				team_b[0]=in;
				team_b[team_b.size()-1]=out;
			}
		}
		for(j=0;j<p;j++)
			now_playing.push_back(team_a[j].name);
		for(j=0;j<p;j++)
			now_playing.push_back(team_b[j].name);
		sort(now_playing.begin(),now_playing.end());
		printf("Case #%d: ",i+1);
		for(j=0;j<now_playing.size();j++)
			cout<<now_playing[j]<<" ";
		printf("\n");
	}
}
