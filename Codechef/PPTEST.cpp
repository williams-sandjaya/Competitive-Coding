#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

long long knapSack(long long W, long long wt[], long long val[], long long n)
{
   long long i,w,K[n+1][W+1];
   for(i = 0; i <= n; i++)
       for(w = 0; w <= W; w++)
       {
           if(i==0 || w==0) K[i][w] = 0;
           else if(wt[i-1] <= w) K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
           else K[i][w] = K[i-1][w];
       }
   return K[n][W];
}
 
int main()
{
	long long W,n,t;
	long long a1,a2,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>W;
		long long val[n],wt[n];
		for(i=0;i<n;i++)
		{
			cin>>a1>>a2>>wt[i];
			val[i]=a1*a2;
		}
    	cout<<knapSack(W, wt, val, n)<<endl;
	}
}
