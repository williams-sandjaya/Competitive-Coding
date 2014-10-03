#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
long long test=0;
scanf("%lld",&test);

    while(test--)
    {
                 long long n,m,ans,f=1;
                 scanf("%lld%lld",&n,&m);
                 long long ar[n];
                 for(int i=0;i<n;i++)
                 scanf("%lld",&ar[i]);
                 
                 sort(ar,ar+n);
                 
                 long long sum=0;
                 for(int i=n-1;i>=0;i--)
                 {
                         sum+=ar[i];
                         if(sum>=m)
                         {
                          printf("%lld\n",n-i);f=0;break;
                         }
                 }
                 
                 if(f==1)
                 printf("-1\n");
                 sum=0;f=0;           
    }
return 0;
}
