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
long long mod = 1000000007,n, arr[500550], zero, neg, pos, lneg, lpos, lans;

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
	 while(cin >> n)
	 {
	     zero = 0,neg = 0, pos = 0,lneg = 0, lpos = 0;
	     
	     for(int i=0; i<n; i++)
		 {
	         cin>>arr[i];
	         if(arr[i]==0)zero++; // total zeroes
	         if(arr[i]<0)neg++; // total negatives
	         if(arr[i]>0)pos++; // total positives
	     }
	     
	     lans = neg;
	     for(int i=0; i<n; i++)
		 {
	         if(arr[i]==0) continue;
	         else if(arr[i]<0) lneg++; // negatives till now
	         else lpos++; // positives till now
	         lans = min(lpos+(neg-lneg),lans); // positive till now + negatives left
	     }
	     cout<<zero+lans<<endl;
	 }
}
