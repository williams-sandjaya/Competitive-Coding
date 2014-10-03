#include <cstdio>
#include<iostream>
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
                 long long int n;long long ans;int i;
                 scanf("%lld",&n);
                 if(n<=4) printf("%lld\n",n);
                 else
                 {
                     if (n%3==0)
                     {
                                ans=binpow(3,(n/3),1000000007);
                                printf("%lld\n",ans%1000000007);
                     }
                     else if(n%3==1)
                     {
                                ans=binpow(3,(n/3)-1,1000000007);
                                ans=(ans*4)%1000000007;
                                printf("%lld\n",ans%1000000007);    
                     }
                     else if(n%3==2)
                     {
                                ans=binpow(3,(n/3),1000000007);
                                ans=(ans*2)%1000000007;
                                printf("%lld\n",ans%1000000007);
                     }
                 }
    }
 
return 0;
system("pause");
}
