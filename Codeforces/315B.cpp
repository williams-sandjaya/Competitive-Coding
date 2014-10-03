#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
int main()
{
long long test=0,i,m,j,n,sum=0,ans=0,ith,val,yth,print,op;
cin>>n>>m;
long long ar[n+1];
for(i=1;i<=n;i++)
cin>>ar[i];
while(m--)
{
          cin>>op;
          if(op==1)
          {cin>>ith>>val; ar[ith]=val-ans;}
          if(op==2)
          {cin>>yth;ans+=yth;}
          if(op==3)
          {cin>>print;cout<<ar[print]+ans<<endl;}
}
 
return 0;
}
