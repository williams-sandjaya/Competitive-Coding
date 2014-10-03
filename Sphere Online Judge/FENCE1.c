#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double area, pi = acos(-1.0), L;
	while(scanf("%d", &n)==1 && n)
	{
		L = n;
		area = (L*L)/(2.0*pi); // area of a semicircle , put l=2*pi*r/2 = pi * r  to verify
		printf("%.2lf\n", area);
	}
	return 0;
}
