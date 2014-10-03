#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
int a[2000010];long long int sum[2000010];

int main()
{
   int n,i;long long int sums=0LL;
   scanf("%d",&n);
   for(i=0;i<n;++i) scanf("%d",&a[i]);
   sort(a,a+n);
   
   sum[n-1]=a[n-1];
   for(i=n-2;i>=0;--i) sum[i]=a[i]+sum[i+1];
   i=n;
   
   while(i>0)
   {
      sums+=sum[n-i];
      i=i>>2;
   }
   cout<<sums<<endl;
   return 0;
}
