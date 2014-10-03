#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;
long long mod = 1000000007;
long long fact[2000010];
 
long long binpow(long long val, long long deg, long long mod) // calculates and returns (val^deg) % mod
    {
        if (!deg) return 1 % mod;
        if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
        long long res = binpow(val ,deg >> 1, mod);
        return (res*res) % mod;
    }
	

 
int main()
{
	fact[0] = 1;
	for(int i=1;i<=2000010;i++)
    	fact[i] = (fact[i-1]*i)%mod;
 
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long N; 
        scanf("%lld",&N);
        N--;
		long long inv = binpow(fact[N],mod-2,mod);
		long long ans = (fact[2*N+1]*inv)%mod;
		ans = (ans*inv)%mod;
		printf("%lld\n", ans);
	}
	return 0;
}
