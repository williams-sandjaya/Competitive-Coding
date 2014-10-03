#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}

int main()
{
    long long test=0,i,n,ans=0;
    cin >>test;
    
        while(test--)
        {
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        ans=a[0];
        
        for(i=0;i<n;i++)
        ans=gcd(a[i],ans);
        
        cout<<ans<<endl;
        }
    return 0;
}
