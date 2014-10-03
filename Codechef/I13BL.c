/*
    if n < 1,373,653, it is enough to test a = 2 and 3;
    if n < 9,080,191, it is enough to test a = 31 and 73;
    if n < 4,759,123,141, it is enough to test a = 2, 7, and 61;
    if n < 2,152,302,898,747, it is enough to test a = 2, 3, 5, 7, and 11;
    if n < 3,474,749,660,383, it is enough to test a = 2, 3, 5, 7, 11, and 13;
    if n < 341,550,071,728,321, it is enough to test a = 2, 3, 5, 7, 11, 13, and 17.*/
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
unsigned long long m;
unsigned long long ap[10]={2u,7u,61u};		//values of a to be used
unsigned long long ans=1u;
 
unsigned long long binpow (unsigned long long a,unsigned long long n ) 
{
	unsigned long long res = 1u ;
	while ( n )
		if ( n & 1 ) 
		{
			res=(res * a)%m ;
			n=n-1 ;
		}
		else 
		{
			a= (a*a)%m;
			n >>=1;
		}
	return res ;
}
 
int miler(unsigned long long  n)
{
	unsigned long long  p=n-1,rem;
	int p2=0;		//calculates s in n=2^s*d
	m=n;
	while(p%2==0)
	{
		p/=2;
		p2++;
	}
	for(int i=0;i<3;i++)
	{
	//	printf("boca\n");
		//counter=0;
		//b=p;
		//binary();
		//printf("%llu %llu\n",p,ap[i]);
		rem=binpow(ap[i],p);
		//printf("rem before is %llu mod value is %llu\n",rem,m);
		for(int j=0;j<p2;j++)
		{
			if(rem==1 || rem==0)
				break;
			rem=(rem*rem)%m;
		}
		if(rem!=1 && rem!=0)
			return -1;
		//printf("rem after a loop %llu\n",rem);
	}
	return 1;
}
void solution(unsigned long long n)
{
	if(n%2==0 || n%3==0)
		return solution(n-1);
	else
	{
		if(miler(n)==1)
		{
			printf("%llu\n",n);
			return;
		}
		else
			solution(n-1);
	}
}
int main()
{
	int test;
	unsigned long long n;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%llu",&n);
		if(n==3)
		{
			printf("2\n");
			continue;
		}
		if(n==5)
		{
			printf("3\n");
			continue;
		}
		solution(n-1);
	}
	return 0;
}
 
