#include<stdio.h>
#include<algorithm>
using namespace std;
long long maxSubArraySum(long long a[], long long size)
{
   long long max_so_far = 0, max_ending_here = 0, i;
   for(i = 0; i < size; i++)
   {
     max_ending_here = max_ending_here + a[i];
     if(max_ending_here < 0)
        max_ending_here = 0;
     if(max_so_far < max_ending_here)
        max_so_far = max_ending_here;
    }
    return max_so_far;
} 
 
int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		long long int a[n];
		for(int i=0;i<n;i++)
		    scanf("%lld",&a[i]);
      	long long max_sum = maxSubArraySum(a, n);
      	if(max_sum==0)
      	{
      		max_sum=a[0];
      		for(int i=0;i<n;i++)
      			max_sum=max_sum>a[i]? max_sum:a[i];
      	}
     	printf("%lld\n",max_sum);
	}
}
