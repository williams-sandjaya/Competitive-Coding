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
using namespace std;

int main()
{
   	long long t,i,j,k,n,m;
    scanf("%d",&t);
    while(t--)
    {
    	char stra[505],strb[505];
    	long long dp[505][505];
        scanf("%s",&stra);
        scanf("%s",&strb);
        n=strlen(stra);
        m=strlen(strb);
        for(i=0;i<=n;i++)
        	dp[i][0]=i;
        for(i=0;i<=m;i++)
        	dp[0][i]=i;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                if(stra[i-1]==strb[j-1])
					dp[i][j]=dp[i-1][j-1];
                else
                	dp[i][j]=1+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
            }
        printf("%lld\n",dp[n][m]);
    }
}
