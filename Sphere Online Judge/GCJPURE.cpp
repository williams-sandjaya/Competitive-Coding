#include <algorithm>
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
#define FOR(i,a,b) for (int _n(b), i(a); i < _n; i++)
#define mod 100003
#define MAX 512
long long r[MAX][MAX];
long long cnk[MAX][MAX];

int main()
{
    memset (r, 0, sizeof (r));

    FOR (i, 0, MAX)
        FOR (j, 0, MAX)
        {
            if (i<j)
                cnk[i][j] =0;
            else if (i==j || j==0 )
                cnk[i][j] = 1;
            else
                cnk[i][j] = (cnk[i-1][j] + cnk[i-1][j-1])%mod;
        }

    FOR (i, 2, MAX)
        r[i][1] = 1;

    FOR (i, 2, MAX)
        FOR (j, 2, i)
            FOR (k, 1, j)
                r[i][j] += (r[j][k]*cnk[i-j-1][j-k-1])%mod;

    int t;
    cin >> t;
    FOR (tt, 0, t)
    {
        cout << "Case #" << (tt+1) << ": ";
        int n;
        cin >> n;
        long long res = 0;
        FOR (j, 1, n)
            res += r[n][j];
        cout << res%mod << endl;
    }
	return 0;
}
