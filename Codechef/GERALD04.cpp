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
    long long test,i,j,k,m,n,p,sum=0;
    int t,h1,h2,m1,m2,dist;
	//freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    float ans,ans1,ans2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d",&h1,&m1);
        scanf("%d:%d",&h2,&m2);
        scanf("%d",&dist);
        ans=abs((h1-h2)*60+(m1-m2));
        ans1=ans+dist;
        ans2=ans;
        if(ans<=2*dist)
            ans2=ans+(2*dist-ans)/2;
        printf("%.1f %.1f\n",ans1,ans2);
    }
}
