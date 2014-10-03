#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long long mod = 1000000007;

int main()
{
    
long long test=0,n,ans=0;double res;
scanf("%lld",&test);
 
    while(test--)
    {
        scanf("%lld",&n);
        n=n-n/3; 
        printf("%lld\n",n%mod);
    }
 
system("pause");
return 0;
}
