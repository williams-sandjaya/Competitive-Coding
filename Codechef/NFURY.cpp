/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<bitset>
#include<queue>
#include<string.h>
#include<cstring>
#include<deque>
#include<iomanip>
#include<map>
#include<set>
#include<stack>
#include<stdlib.h>
#define limit 1000000
using namespace std;
int sq[250]={1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400,441,484,529,576,625,676,729,784,841,900,961,1024};

int main()
{
	int t,dp[1001],a;
	cin>>t;
	dp[0]=0; dp[1]=1;
	for(int i=2;i<=1000;i++)
	{
	    dp[i]=10008;
	    for(int j=0;j<=31;j++)
	        if(i-sq[j]>=0)
	        	dp[i]=min(dp[i-sq[j]]+1,dp[i]);
	}
	while(t--)
	{
		cin>>a;
		printf("%d\n",dp[a]);
	}
}
