#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
int getminsteps ( int n )
{
int dp[n+1] , i;
dp[1] = 0; // trivial case
for(i=2;i<=n;i++)
{
dp[i] = 1 + dp[i-1];
if(i%2==0) dp[i] = min( dp[i] , 1+ dp[i/2] );
if(i%3==0) dp[i] = min( dp[i] , 1+ dp[i/3] );
}
return dp[n];
}


int main()
{
int test=0,i,n;
  
  cin>>test;
  for(i=0;i<test;i++)
  {              
    scanf("%d",&n);
    printf("Case %d: %d\n",i+1,getminsteps(n));
  }
return 0;
           
}
