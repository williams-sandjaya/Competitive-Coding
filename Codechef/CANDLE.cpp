#include<stdio.h>
int main()
{
	int n,k,min,i,a[10];
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<10;i++)
			scanf("%d",&a[i]);
		min=a[1];
		k=1;
		for(i=2;i<10;i++)
			if(a[i]<min)
			{
				min=a[i];
				k=i;
			}
		if(min==0)
			printf("%d\n",k);
		else if(a[0]<min)
		{
			printf("1");
			for(i=0;i<=a[0];i++)
				printf("0");
			printf("\n");
		}
		else
		{
			for(i=0;i<=min;i++)
				printf("%d",k);
			printf("\n");
		}
	}
}
