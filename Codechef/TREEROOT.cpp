#include<stdio.h>
 
int main()
{
	int t,n,n1,n2,sum1,sum2,i;
	scanf("%d",&t);
	while(t--)
	{
		sum1=sum2=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&n1,&n2);
			sum1+=n1;
			sum2+=n2;
		}
		printf("%d\n",(sum1-sum2));
	}
}
