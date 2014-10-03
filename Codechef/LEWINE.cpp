#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int w[5100],v[5100],dp[10010];

int main()
{
    int t,W,E,F,n;
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        cin>>W>>n;
        for(int i=1;i<=n;i++)
            cin>>w[i]>>v[i];
        for(int i=1;i<=n;i++)
            for(int j=w[i];j<=W;j++)
                dp[j] = max(dp[j],v[i]+dp[j-w[i]]);
        cout<<dp[W]<<endl;
    }
}
