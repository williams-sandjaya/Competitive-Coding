#include <stdio.h>

int gcd(int a, int b)
{
	while(b) return gcd(b,a%b);
	return a;
}

int main()
{
	int t, i;
	int n1, n2;
	char num[300];
	for(scanf("%d",&t);t;t--)
	{
		scanf("%d%s",&n1,num);
		if(!n1) // if n1 == 0
		{
			printf("%s\n",num);
			continue;
		}
		for(i=0;num[i]!='\0';i++)
			n2 = (n2*10+num[i]-'0')%n1; // method to calculate gcd of big numbers
			// num[i]-'0' returns the number stored as string in num[i]
			
		printf("%d\n",gcd(n1,n2));
		n2=0;
	}
	return 0;
}
