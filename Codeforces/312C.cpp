/*
We read the pseudo code carefully. If we ignore "break", tot will be up to n(n-1)/2
Consider whether we can make such inequality d<=p[j].x-p[i].x is always false. 
The obvious way is to make all points' x coordinates the same to avoid the break statement every time. 
And we can just choose n distinct numbers to be all points' y coordinate.
*/

#include<iostream>
#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int n,k;

int main()
{
	scanf("%d%d",&n,&k);
	if(n*(n-1)/2<=k) printf("no solution\n");
	else
    {
		int y=-1000000000;
		for(int i=1;i<=n;++i)
        {
			printf("%d %d\n",i,y);
			y+=2013;
		}
	}
}
