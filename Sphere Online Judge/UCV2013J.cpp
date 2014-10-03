#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	long long n;
	while(cin>>n && n)
	{
		long long sum=0,i,m,ar[n];
		if(n&1)
		   m=(n+1)/2;
		else
		   m=n/2;

		for(i = 1; i <= n; i++)
		{
			cin>>ar[i];

			if(i > n-m)
				sum += ar[i] ;
		} 
		printf("%d\n",sum) ;
	}
}
