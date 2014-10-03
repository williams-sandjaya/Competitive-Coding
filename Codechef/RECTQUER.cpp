# include <iostream>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <cstdio>
# include <cmath>
# include <numeric>
# include <cstdlib>
# include <cstring>
# include <vector>
# include <list>
# include <set>
# include <map>
# include <stack>
# include <queue>
# include <cctype>
# include <climits>
# include <complex>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef pair<int,PII> TRI;
typedef vector<string> VS;

#define GI ({int t;scanf("%d",&t);t;})
#define REP(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,n) REP(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define TR(i,x) for(typeof(x.begin()) i=x.begin();i!=x.end();i++)
#define bitcount(x) __builtin_popcount(x)
#define pb push_back
#define mp make_pair
#define mt(a,b,c) mp(a,mp(b,c))
#define EPS (double)(1e-9)
#define INF 1000000000
#define MOD 1000000007
#define PI (double)(3.141592653589793)

#define DEBUG(args...)	{dbg,args; cerr<<endl;}
struct debugger
{
	template<typename T> debugger& operator , (const T& v)
	{	
		cerr<<v<<" ";	
		return *this;	
	}
} dbg;

inline int ni()
{
	register int r=0,c;
	for(c=getchar_unlocked();c<=32;c=getchar_unlocked());
	if(c=='-')
		return -ni();
	for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar_unlocked());
	return r;
}

int dp[301][301][11],a[300][300];

int main()
{
	int n,q,x1,x2,y1,y2,ans;

	n = ni();

	REP(i,0,n)
		REP(j,0,n)
			a[i][j] = ni();

	REP(i,0,300) 
		REP(k,1,11) 
			dp[i][0][k] = dp[0][i][k] = 0;
			
	REP(i,1,n+1)
		REP(j,1,n+1)
			REP(k,1,11)
				dp[i][j][k]=dp[i][j-1][k]+dp[i-1][j][k]-dp[i-1][j-1][k]+(a[i-1][j-1]==k);

	q = ni();
	REP(i,0,q) 
	{
		x1 = ni(); y1 = ni(); x2 = ni(); y2 = ni(); ans = 0;
		REP(k,1,11)
			ans += ((dp[x2][y2][k]-dp[x1-1][y2][k]-dp[x2][y1-1][k]+dp[x1-1][y1-1][k]) > 0);
		printf("%d\n", ans);
	}
}
