#include <cstdio>
#include<iostream>
 
long long int mod = 1000000007;
long long binpow(long long val, long long deg, long long mod) {
        if (!deg) return 1 % mod;
        if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
        long long res = binpow(val ,deg >> 1, mod);
        return (res*res) % mod;
}
 
int main()
{
    
    int test=0;
    scanf("%d",&test);
    while(test--)
    {
         long long int n;
         scanf("%lld",&n);
         printf("%lld\n",(n*(binpow(2,n-1,mod)%mod)%mod));
    }
 
return 0;
//system("pause");
}
