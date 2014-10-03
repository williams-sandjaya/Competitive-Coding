#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX 6000
int dp[MAX + 1][3];
char s[MAX + 1];

int main(){
    int L,l,i,a,b,c;
    
    scanf("%d%s",&L,s);
    
    for(l = 2,a = 0,b = 1,c = 2;l <= L;++l)
    {
        for(i = 0;i + l <= L;++i)
        {
            dp[i][c] = l;
            
            if(s[i] == s[i + l - 1]) dp[i][c] = dp[i + 1][a];
            else dp[i][c] = 1 + min(dp[i + 1][b],dp[i][b]);
        }
        
        ++a; ++b; ++c;
        if(a == 3) a = 0;
        if(b == 3) b = 0;
        if(c == 3) c = 0;
    }
    printf("%d\n",dp[0][L % 3]);
    return 0;
}
