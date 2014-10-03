#include<stdio.h>

int min(int x, int y)
{
    return (x<y) ? x : y;
}

int max(int x, int y)
{
    return (x>y) ? x : y;
}

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d",&n);
	    int a[n][n],min_dp[n][n],max_dp[n][n];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            scanf("%d",&a[i][j]);
	    min_dp[0][0] = a[0][0];
	    max_dp[0][0] = a[0][0];
	    
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	        {
	            if(j==0 && i!=0)
	            {
	                min_dp[i][j] = min_dp[i-1][j] + a[i][j];
	                max_dp[i][j] = max_dp[i-1][j] + a[i][j];
	            }
	            else if(i==0 && j!=0)
	            {
	                min_dp[i][j] = min_dp[i][j-1] + a[i][j];
	                max_dp[i][j] = max_dp[i][j-1] + a[i][j];
	            }
	            else if(i!=0 && j!=0)
	            {
	                min_dp[i][j] = a[i][j] + min(min_dp[i-1][j],min_dp[i][j-1]);
	                max_dp[i][j] = a[i][j] + max(max_dp[i-1][j],max_dp[i][j-1]);
	            }
	        }
	    double ans1 = (double)(min_dp[n-1][n-1])/(double)(2*n-1);
	    double ans2 = (double)(max_dp[n-1][n-1])/(double)(2*n-1);
	    printf("%lf %lf\n",ans1,ans2);
    }
}
