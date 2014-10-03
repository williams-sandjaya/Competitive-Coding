#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define i64 long long
#define MAX 1001

i64 dp[101][MAX];

inline i64 sq(i64 x)
{
	return x*x;
}

i64 Pow(int n, int p)
{
	if(p==0) return dp[n][p]=1;
	if(n==0) return dp[n][p]=0;
	if(p==1) return dp[n][p]=n;
	if(p==2) return dp[n][p]=n*n;
	if(dp[n][p]) return dp[n][p];
	if(p&1) return dp[n][p]=n*Pow(n,p-1);
	return dp[n][p]=sq(Pow(n,p/2));
}

int main()
{

	int n, k, i, j, c = 1, x;
	i64 res, coeff[MAX], temp;
	while(scanf("%d", &n)==1 && n>=0)
	{
		printf("Case %d:\n", c++);
		for(i=n; i>=0; i--)
			scanf("%lld", &coeff[i]);
		scanf("%d", &k);
		for(i=0; i<k; i++)
		{
			scanf("%d", &x);
			res = 0;
			for(j=0; j<=n; j++)
			{
				if(x<0)
				{
					temp = Pow(-x, j);
					if(j&1) temp = -temp;
				}
				else temp = Pow(x, j);
				res += coeff[j]*temp;
			}
			printf("%lld\n", res);
		}
	}
	return 0;
}
