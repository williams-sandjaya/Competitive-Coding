#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	long long int n,p,i,j,sum,m,a,u=0,b,c,br[100000],cr[100000],q;
	vector<int> ar(1000001);
	char x;
	scanf("%lld %lld",&n,&p);
	scanf("%lld",&a);
	ar[0]=a;
	for(i=1;i<n;i++)
	{
		scanf("%lld",&a);
		ar[i]=ar[i-1]+a;
	}
	for(q=0;q<2*p;q++)
	{
		scanf("%c %lld %lld",&x,&b,&c);
		if(x=='S')
		{
			if(b==0)
				sum=ar[c];
			else
				sum=ar[c]-ar[b-1];
			for(j=0;j<u;j++)
				if(br[j]>=b && br[j]<=c)
					sum+=cr[j];
			printf("%lld\n",sum);
		}
		else if(x=='G')
		{
			br[u]=b;
			cr[u]=c;
			u++;
		}
		else if(x=='T')
		{
			br[u]=b;
			cr[u]=(-1)*c;
			u++;
		}
	}
}
