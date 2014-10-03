/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <limits.h>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <vector>
#include <bitset>
#include <queue>
#include <deque>
#include <stack>
#include <string.h>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <list>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <stdbool.h>
#define limit 1000000
using namespace std;
long long mod=1000000007,prime_upto=limit,sqrtlimit=sqrt(limit); vector<bool> sieve(limit+1,true);

long long binpow(long long val,long long deg,long long mod) // Calculates (val^deg)%mod
{
    if(!deg)
		return 1%mod;
    if(deg&1)
		return binpow(val,deg-1,mod)*val%mod;
    long long res=binpow(val,deg>>1,mod);
    return (res*res)%mod;
}

long long gcd(long long a,long long b) // Calculates gcd of two numbers
{
	if(b%a==0)
	   return a;
	else
	   gcd(b%a,a);
}

long long prime_sieve() // Eratosthenes prime sieve
{
    for(long long n=4;n<=limit;n+=2)
        sieve[n]=false;
    for(long long n=3;n<sqrtlimit;n+=2)
        if(!sieve[n])
            for(long long m=n*n;m<=limit;m+=(2*n))
                sieve[m]=false;
    sieve[1]=false;
}

int main()
{
	long long test,t=0,i,j,k,m,n,p,testcase,sum=0,ans=0,c;
	//freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	cin>>t;
	for(testcase=1;testcase<=t;testcase++)
	{
		cin>>n>>k>>c; // jars,coins,required coins
		printf("Case #%lld: ",testcase);
		if(k<n) // if coins<jars
			printf("%lld\n",k);
		else if(k%n==0) // if coins%jars=0
			printf("%lld\n",c);
		else
			printf("%lld\n",c+k-n);
	}
}
