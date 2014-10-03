#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
using namespace std;
int n, a[111];

int main() 
{
    scanf("%d", &n);
    
    FOR(i,1,n) 
        scanf("%d", &a[i]);

    int res = 0;
    FOR(i,1,n) 
        FOR(j,i,n) 
        {
            int now = 0;
            FOR(k,1,n) 
            {
                if (k >= i && k <= j) now += 1 - a[k];
                else now += a[k];
            }
            res = max(res, now);
        }
    cout << res << endl;
}
