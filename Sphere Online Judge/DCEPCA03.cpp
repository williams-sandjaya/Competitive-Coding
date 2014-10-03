#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

long long mod = 1000000007,z=0,prime_upto=10000,etf_upto=1000000,etf[1000010];vector<long long int> primes(prime_upto+1,0);

    void cal_etf() // calculate Euler Totient function's first 1000000 terms
    {
      long long Lim=etf_upto; // ETF terms upto limit
    
      for(int i = 1 ;i <= Lim ; i++ )
         etf[i]=i;
    
      for(int i=2 ; i<= Lim ; i++ )
        if ( etf[i] == i)
          for(int j = 2*i ; j <= Lim ; j += i)
            etf[j] -=  etf[j]/ i ;
    
      for(int i=2 ; i<= Lim ; i++)
              if ( etf[i]==i)
                 etf[i] = i-1;//stores ETF terms upto limit in etf[]
                 //to print this global array use this line in main()-  for(i=0;i<etf_upto;i++) printf("%lld ",etf[i]);
    }



int main()
{
long long test=0,i,j,n,H;
//prime_sieve();
cal_etf();
scanf("%lld",&test);

    while(test--)
    {
                 
        scanf("%lld",&n);         
        H=0;
        for(i=1;i<=n;i++)
        H+=etf[i];
        unsigned long long int h = H;
        unsigned long long int x = h*h;
        printf("%lld\n",x);

    }

system("pause");
return 0;
}
