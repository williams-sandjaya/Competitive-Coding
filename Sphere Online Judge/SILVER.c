#include<stdio.h>
int main()
{
	int n,i,t;
	scanf("%d",&n);
	while(n>0)
	{
		for(i=0;i<20000;i++)
		{
			if(pow(2,i)>n)
				break;
		}
		printf("%d\n",i-1);
		scanf("%d",&n);
	}
	return 0;
}
