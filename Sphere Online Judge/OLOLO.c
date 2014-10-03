#include<stdio.h>


int main()
{
	int t,j,c=0,a;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	scanf("%d",&a);
	c=c^a;
	
	}
	printf("%d",c);
	system("pause");
}


