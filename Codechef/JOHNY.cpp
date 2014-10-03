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

long long binary_search(long long A[], long long imin, long long imax, long long key)
{
  if(imax < imin)
     return 0;
  else
  {
	  int imid = (imin+imax)/2;
	  
	  if (A[imid]>key)
	      return binary_search(A,imin,imid-1,key);
	  if (A[imid]<key)
	      return binary_search(A,imid+1,imax,key);
	  if (A[imid]==key)
	      return imid+1;
  }
}

int main()
{
	long long test=0,i,j,k,n,sum=0,ans=0,key,index;
	scanf("%lld",&test);
	while(test--)
	{
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		key=a[k-1];
		sort(a,a+n);
		index=binary_search(a,0,n,key);
		cout<<index<<endl;
	}
}
