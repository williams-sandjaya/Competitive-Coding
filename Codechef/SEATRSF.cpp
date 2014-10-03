#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<stack>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<utility>
using namespace std;
long long modulo = 1000000007,z=0,prime_upto=10000,etf_upto=1000000,etf[1000010];vector<long long int> primes(prime_upto+1,0);
 
long long power(long long base, long long exp, long long mod)
{
    if (!exp) return 1 % mod;
    if (exp & 1) return power(base, exp - 1, mod) * base % mod;
    long long res = power(base ,exp >> 1, mod);
    return (res*res) % mod;
}

long long prime_sieve() // Eratosthenes prime sieve
{
    long long limit=prime_upto; // primes upto limit
    long long sqrtlimit = sqrt(limit);
    vector<bool> sieve(limit+1, false);

    for (long long int n=4;n<=limit;n=n+2)
    {
        sieve[n]=true;
    }
    for(long long int n=3;n<sqrtlimit;n=n+2)
    {
        if(!sieve[n])
        {
            for(long long int m=n*n;m<=limit;m=m+(2*n))
            {
                sieve[m]=true;
            }
        }
    }
    for(long long int i=2;i<=limit;i++)
    {
        if(!sieve[i])
            primes[z++]=i;//stores primes upto limit in primes[]
            //to print this global array use this line in main()-  for(i=0;i<z;i++) printf("%lld ",primes[i]);
    }
}

long long int gcd(long long int a,long long int b) // calculate gcd of two numbers
{
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}

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
	long long t,n,q,k,m;
	cin>>t;
	while(t--)
	{
		cin>>n >>m >>q >>k;
		if(q==0)
		   cout<<m <<endl;
		if(q>m && q!=0)
		   cout<<0 <<endl;
		if(q<=m && q!=0)
		   cout<<(((m-q)*(((power(q+1,n,modulo)+power(q-1,n,modulo)+2*modulo-2*power(q,n,modulo)))%modulo))%modulo) <<endl;
	}
}
