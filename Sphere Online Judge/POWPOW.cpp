#include <cstdio>
using namespace std;
#define MOD 1000000007
#define MOD2 1000000006
long long fact[200001];

int pow(int val,int deg,int mod) // calculates and returns (val^deg) % mod
    {
        if (!deg) return 1 % mod;
        if (deg & 1) return pow(val, deg - 1, mod) * val % mod;
        long long res = pow(val ,deg >> 1, mod);
        return (res*res) % mod;
    }

int main()
{
    int p = 2,q = 500000003,invp = 250000002,T,a,b,n; // 500000004 is inverse of 2 // inverse of 4
    
    fact[0] = 1;
    for(int i = 1;i <= 200000;++i)
        fact[i] = fact[i - 1] * i % q;
    
    scanf("%d",&T);
    
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&n);
        
        long long remq = fact[2*n] * pow(fact[n]*fact[n]%q,q - 2,q) % q;
        long long x = remq*p*invp%MOD2;
        x = pow(x,b,MOD2);
        x = pow(a,x,MOD);
        
        printf("%lld\n",x);
    }
    
    return 0;
}

