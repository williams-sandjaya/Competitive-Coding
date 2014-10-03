#include <stdio.h>
const unsigned mod = 65536;//with mod
const unsigned M = 65535;//range of X

unsigned gcd(unsigned a, unsigned b)
{
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}

int main()
{
	register int n;unsigned g, X, a;char str[10];
	
	while(scanf("%d", &n)==1 && n)
	{
		a = 1;
		while(n--)
		{
			scanf("%s%u", str, &X);
			if(str[0]=='M')
			{
                // a acts as a temporary X variable , so it's range can't be greater than M
				a *= X; // multiply all the numbers associated with MUL
				if(a > M) a =a&M; // and operator of a&M // M is the range of X
			}
		}
		g = gcd(a, mod);
		printf("%u\n", mod/g);
	}
	return 0;
}
