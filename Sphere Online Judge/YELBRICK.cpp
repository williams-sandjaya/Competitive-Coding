#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
long long int gcd(long long int a,long long int b) // calculate gcd of two numbers
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
 
int main()
{
long long test=0,i,j,n,sum=0,g;
 
    while(scanf("%lld",&n)&& n)
    {
        long long ar[n*3];
        for(i=0;i<n*3;i++)
        cin>>ar[i];
        
        g=ar[0];
        for(i=0;i<n*3;i++)
        g=gcd(g,ar[i]);
        
        for(i=0;i<n*3;i++)
        ar[i]=ar[i]/g;
        
        for(i=0;i<n*3;i=i+3)
        sum+=ar[i]*ar[i+1]*ar[i+2];
        
        cout<<sum<<endl;
        sum=0;
    }    
 
system("pause");
return 0;
}
