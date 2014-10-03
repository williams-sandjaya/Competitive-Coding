#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define mod 1000000007
long long  map[11][2] = {0,0,1,9,10,99,100,999,1000,9999,10000,99999,100000,999999,1000000,9999999,10000000,99999999,100000000,999999999,1000000000}; 

int numdigits(int N) 
{
	int i =0;
	while(N>0) 
	{
		N=N/10;
		i++;
	}
  return(i);
}

long long calsum(long long  L,long long  R) 
{
	long long sum=0,low=L,high=R, currsum=0, lowd, highd;
	lowd = numdigits(L);
	highd = numdigits(R);
	while(lowd<=highd) 
	{
		if(lowd!=highd)
		   high = map[lowd][1]; 
		else
		   high = R;
		currsum = ((high*(high+1)-low*(low-1))/2)%mod;
		sum = (lowd*currsum + sum)%mod;
		lowd++;
		low = map[lowd][0];
	}
	return(sum);
}

int main() 
{
	int t,i;
	long long L,R;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&L,&R);
		printf("%lld\n",calsum(L,R));
	}
}