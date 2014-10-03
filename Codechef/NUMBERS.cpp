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
		long long num;
};

bool comp(const player &x,const player &y)
{
	if(x.num<y.num)
		return true;
	else
		return false;
}

int main()
{
	long long test=0,i,j,k,n,f,num,sum=0,ans=0;
	scanf("%lld",&test);
	while(test--)
	{
		player ele;vector<player> arr;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>ele.name>>ele.num;
			arr.push_back(ele);
		}
		sort(arr.begin(),arr.end(),comp);	
		f=0;
		if(n>2 && arr[0].num!=arr[1].num)
			cout<<arr[0].name<<endl;
		else if(n>2 && arr[0].num==arr[1].num)
		{
			for(i=1;i<n-2;i++)
				if(arr[i].num!=arr[i+1].num && arr[i+1].num!=arr[i+2].num)
				{
					cout<<arr[i+1].name<<endl;
					f=1;	
					break;
				}
			if(f==0 && arr[n-2].num!=arr[n-1].num)
				cout<<arr[n-1].name<<endl;
			else if(i==n-2)
				cout<<"Nobody wins."<<endl;
		}
		else if(n==2 && arr[0].num==arr[1].num)
			cout<<"Nobody wins."<<endl;
		else if(n==1)
			cout<<arr[0].name<<endl;
	}
}
