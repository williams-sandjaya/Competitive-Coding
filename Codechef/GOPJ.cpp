#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,b,sum1=0,i,j;
		scanf("%d%d",&n,&b);
		for(i=1;i<=n;i++)
		{
			sum1=sum1+i;
			if(sum1==b && b!=1)
				sum1=sum1-1;
			else if(sum1==b)
				sum1=sum1-i;
		}
		printf("%d\n",sum1);
	}
}
