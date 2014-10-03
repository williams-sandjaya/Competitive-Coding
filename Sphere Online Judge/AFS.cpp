#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
long long int ans[1000002];
     
int main()
{
    long long int t,n,i;int maxn=1000000;
    
    for (int i = 1; i <= maxn / 2; i++) 
    for (int j = i + i; j < maxn; j += i) 
      ans[j] += i;

    ans[1] = 0;
    for (int i = 3; i < maxn; i++)
       ans[i] += ans[i-1];
    
    scanf("%lld",&t);
    while(t--)
    {
      scanf("%lld",&n);
      printf("%lld\n",ans[n]);
    }
    
return 0;
}
