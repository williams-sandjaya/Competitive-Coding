#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
long long coins[1001];long long dp[1001];int n;

long long solve(int cur)
{
	if(cur >= n) return 0;
		
	long long &newmonster = dp[cur];
	
	if(newmonster != -1) return newmonster;
		
	return newmonster = max(coins[cur] + solve(cur + 2), solve(cur + 1));
}

int main()
{

	int t;
	cin >> t;
	for(int c = 1; c <= t; c++)
    {
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> coins[i];

		memset(dp, -1, sizeof(dp));
		cout << "Case " << c << ": " << solve(0) << endl;
	}
	return 0;
}
