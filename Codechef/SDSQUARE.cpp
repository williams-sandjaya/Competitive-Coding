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
#include<queue>
#include<string.h>
#include<cstring>
#include <deque>
#include <iomanip>
#include <map>
#include <set>
#include <stack>
#include <stdlib.h>
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
	long long test=0,i,j,k,n,a,b,x,y,sum=0,ans=0,arr[100050]={0};
	scanf("%lld",&test);
	for(int i=0;i<100050;i++) 
		arr[i]=0;
	arr[0]=arr[1]=arr[2]=arr[3]=arr[7]=arr[10]=arr[12]=arr[20]=arr[21]=arr[30]=arr[38]=arr[70]=arr[97]=arr[100]=arr[102]=arr[107]=arr[120]=arr[138]=arr[200]=arr[201]=arr[210]=arr[212]=arr[300]=arr[380]=arr[648]=arr[700]=arr[701]=arr[951]=arr[970]=arr[997]=arr[1000]=arr[1002]=arr[1007]=arr[1020]=arr[1049]=arr[1070]=arr[1200]=arr[1380]=arr[1393]=arr[2000]=arr[2001]=arr[2010]=arr[2100]=arr[2120]=arr[3000]=arr[3148]=arr[3153]=arr[3451]=arr[3743]=arr[3747]=arr[3800]=arr[4462]=arr[6357]=arr[6480]=arr[7000]=arr[7001]=arr[7010]=arr[7071]=arr[9510]=arr[9700]=arr[9701]=arr[9970]=arr[9997]=arr[10000]=arr[10002]=arr[10007]=arr[10020]=arr[10070]=arr[10097]=arr[10200]=arr[10243]=arr[10490]=arr[10538]=arr[10679]=arr[10700]=arr[12000]=arr[13800]=arr[13930]=arr[20000]=arr[20001]=arr[20010]=arr[20100]=arr[20102]=arr[20247]=arr[20347]=arr[20348]=arr[21000]=arr[21200]=arr[22138]=arr[30000]=arr[31480]=arr[31488]=arr[31530]=arr[34510]=arr[37430]=arr[37470]=arr[37538]=arr[38000]=arr[38071]=arr[38602]=arr[44620]=arr[63357]=arr[63403]=arr[63570]=arr[64800]=arr[70000]=arr[70001]=arr[70010]=arr[70100]=arr[70107]=arr[70299]=arr[70710]=arr[95100]=arr[97000]=arr[97001]=arr[97010]=arr[99501]=arr[99700]=arr[99970]=arr[99997]=arr[100000]=1;	
	while(test--)
	{
		ans=0;
		cin>>a>>b;
		if((long long)sqrt(a)*(long long)sqrt(a)==a)
			x=(long long)sqrt(a);
		else
			x=(long long)sqrt(a)+1;
		y=(long long)sqrt(b);
		for(i=x;i<=y;i++)
			ans+=arr[i];
		cout<<ans<<endl;
	}
}
