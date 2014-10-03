#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

long long mod = 1000000007;

    long long binpow(long long val, long long deg, long long mod) // calculates and returns (val^deg) % mod
    {
        if (!deg) return 1 % mod;
        if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
        long long res = binpow(val ,deg >> 1, mod);
        return (res*res) % mod;
    }

            


int main()
{
long long test=0,i,j,n,sum=0,ans=0;
scanf("%lld",&test);

    while(test--)
    {
                 cin>>n;
                 ans=(binpow(2,n,mod)+binpow(3,n,mod))%mod;
                 cout<<ans<<"\n";



    }

system("pause");
return 0;
}
