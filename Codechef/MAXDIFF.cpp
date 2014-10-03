#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int test;
scanf("%d",&test);
   while(test--)
    {
        long long n,k,i,sum1=0,sum2=0;
		scanf("%lld%lld",&n,&k);
		long long weights[n];
		for(i=0;i<n;i++) scanf("%lld",&weights[i]);
		sort(weights,weights+n);
		
		if(k>n/2) k=n-k;		
		for(i=0;i<k;i++) sum1+=weights[i];
		for(i=k;i<n;i++) sum2+=weights[i];
		printf("%lld\n",sum2-sum1);
       
    }
system("pause");
return 0;
}


