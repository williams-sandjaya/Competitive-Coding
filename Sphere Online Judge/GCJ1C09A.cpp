#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#define forn(i, n) for(__typeof(n) i=0; i<(n); i++)
int qq, n, m;char s[1024];int a[1024];int p[256];

int main()
{
    scanf("%d", &qq);
        
    forn(ii, qq)
    {
        scanf("%s", s);
        n = strlen(s);
        memset(p, -1, sizeof(p));
        m = 0;
        
        forn(i, n)
        {
            if (p[(int)s[i]] == -1)
                p[(int)s[i]] = m++;

            a[i] = p[(int)s[i]];
            
            if (a[i] < 2) 
                a[i] = 1 - a[i];
        }
        
        m=m>2?m:2;
        long long ans = 0;
        
        forn(i, n)
             ans = ans * m + a[i];

        cout << "Case #" << ii+1 << ": " << ans << endl; 
    }
    return 0;
}
