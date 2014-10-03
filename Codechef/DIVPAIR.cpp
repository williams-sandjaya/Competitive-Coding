#include <stdio.h>
int main()
{
	long long int t,n,m,Sum,x,y;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		x=n/m;
		y=n%m;
		Sum=(x*(x-1)*(m-1))/2;
		Sum+=x*y;
		Sum+=(x*((m-1)/2));
		Sum+=((x*(x-1))/2);
		if(y > m/2)
			Sum+=(y-(m/2));
		printf("%lld\n", Sum);
	}
}			
