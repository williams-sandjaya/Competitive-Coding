#include<algorithm>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	long long t,n,a1,x,testcase=0;
	cin>>n;
	while(n)
	{
		testcase++;
		long long a[n],sum=0,equal=0,ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		equal=sum/n;
		for(int i=0;i<n;i++)
		{
			if(a[i]>equal)
			   ans+=a[i]-equal;
		}
		cout<<"Set #"<<testcase<<endl;
		printf("The minimum number of moves is %d.\n",ans);
		cin>>n;
	}
}
