#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;
//find the value of ((a1+a2+a3+...+...an)^P) % M where P is a prime number
long long binpow(long long val, long long deg, long long mod) // calculates and returns (val^deg) % mod
    {
        if (!deg) return 1 % mod;
        if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
        long long res = binpow(val ,deg >> 1, mod);
        return (res*res) % mod;
    }
    
int main()
{
    long long cases,m,p,n,sum,x,i;
    scanf("%lld",&cases);
    while(cases--)
    {
         scanf("%lld%lld%lld",&n,&p,&m);
         sum=0;
         for(i=1;i<=n;i++)
         {
              scanf("%lld",&x);
              sum+=x;
         }
         cout<<binpow(sum,p,m)<<endl;
    }
    return 0;
}
