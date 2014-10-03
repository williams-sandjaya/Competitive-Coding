#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <set>
#include <stack>
#include <vector>
#include <map>
#include <list>
#include <queue>
using namespace std;
/*
Find pairs x,y such that (x)(x-1)/(x+y)(x+y-1) = 0.5 where x,y<=n
*/
int main() 
{
	long long t,n,b,bt,nt,num; 
	cin>>t;
	for(int i=1;i<=t;i++) 
	{
		cin>>num;
		b=3;
		n=4;
		printf("Case:%d\n", i);
		while(b<=num) 
		{
			printf("%lld %lld\n", b,n-b);
			bt=3*b+2*n-2;
			nt=4*b+3*n-3;
			b=bt;
			n=nt;
		}
	}
}
