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
    long long test=0,i,j,k,n,sum=0,ans=0,temp,f,l; vector<int> a0;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        int arr[n+2][k+2];
        for(i=0;i<n;i++)
            for(j=0;j<k;j++)
                cin>>arr[i][j];
        for(i=0;i<n;i++)
        	arr[i][k]=i;
        a0.clear();
        for(i=0;i<k;i++)
        {
           	cin>>temp;
            a0.push_back(temp);
        }
		vector<int> a1,a2,a3;
        for(l=0;l<k;l++)
        {
            if(l>=1)
               continue;
			a1.clear(); a2.clear(); a3.clear();
            a1.insert(a1.end(),a0.begin(),a0.end());
            for(i=0;i<n;i++)
            {
                f=0;
                for(j=0;j<k;j++)
                    if(arr[i][j]>a1[j])
                       f=1;
                if(f==0)
                {
                    for(j=0;j<k;j++)
                    	a1[j]-=arr[i][j];
                    a3.push_back(arr[i][k]);
                }
            }
            if(a3.size()>a2.size())
            {
                a2.clear();
                a2.insert(a2.end(),a3.begin(),a3.end());
            }
        }
        cout<<a2.size()<<endl;
        sort(a2.begin(),a2.end());
        for(i=0;i<a2.size();i++)
        	cout<<a2[i]+1<<" ";
        cout<<endl;
    }
}
