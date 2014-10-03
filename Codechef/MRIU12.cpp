/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long long mod = 1000000007;

long long binpow(long long val, long long deg, long long mod) // calculates and returns (val^deg) % mod
{
    if (!deg) return 1 % mod;
    if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
    long long res = binpow(val ,deg >> 1, mod);
    return (res*res) % mod;
}

long long int gcd(long long int a,long long int b) // calculates gcd of two numbers
{
	if(b%a==0)
	   return a;
	else
	   gcd(b%a,a);
}

int main()
{
	long long test=0,j,k,n,ans=0;
	scanf("%lld",&test);
	while(test--)
	{
		int i,sum=0;
        char str[12];
        scanf("%s",str);
        for(i=0;i<10;i++)
        {
	        if(str[i]=='0')
	        {printf("-----");sum+=0;}
	        else if(str[i]=='1')
	        {printf(".----");sum+=1;}
	        else if(str[i]=='2')
	        {printf("..---");sum+=2;}
	        else if(str[i]=='3')
	        {printf("...--");sum+=3;}
	        else if(str[i]=='4')
	        {printf("....-");sum+=4;}
	        else if(str[i]=='5')
	        {printf(".....");sum+=5;}
	        else if(str[i]=='6')
	        {printf("-....");sum+=4;}
	        else if(str[i]=='7')
	        {printf("--...");sum+=3;}
	        else if(str[i]=='8')
	        {printf("---..");sum+=2;}
	        else
	        {printf("----.");sum+=1;}
        }
        printf("\n%d\n",sum);
	}
}
