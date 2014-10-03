#include<stdio.h>

int main()
{
	long long t,j,n,up,sd,by3;
	long long k;

	scanf("%lld",&t);
	
	for(j=0;j<t;j++)
	{
		scanf("%lld",&n);

		sd=n/3;
		up=n-(sd*2+1);

		k=2*((sd*(sd+1))/2)+((up*(up+1))/2);
		printf("%lld\n",k);
	}
	system("pause");
}
