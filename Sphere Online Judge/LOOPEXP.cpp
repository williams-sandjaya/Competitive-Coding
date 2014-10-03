#include <iostream>  
#include <cstdio>   
#include <algorithm>    
using namespace std;
long long mod = 1000000007;
 
/*
http://oeis.org/A000254
*/
 
double a[1000001];
int main () 
{    
  long long int n,i;
  /*
  fact[0] = 1;
    for(int i=1;i<=1000000;i++)
        fact[i] = (fact[i-1]*i)%mod;
  
  a[0]=0LL;
    for(i=0;i<1000000;i++)
        a[i+1]=(((i+1)*a[i])%mod + fact[i])%mod;
  */
        
    a[1]=1;
    for(i=2;i<1000000;i++)
    a[i]=a[i-1]+(1.0/i);
    
    long long test;
    cin>> test;
    
    while(test--)
    {
        cin>>n;
        //float stirling = a[n];
        //float factorial = fact[n];
        //double ans = stirling/factorial;
        printf("%.15lf\n",a[n]);
    }

  system("pause");
  return 0;
}
