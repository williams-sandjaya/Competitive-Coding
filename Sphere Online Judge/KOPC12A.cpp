#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std; 
long long h[10000+2],c[10000+2];
long long dod[10000+2];
 
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,i;long long akt=0,aktd=0;
        scanf("%d",&n);
        
        for(i=0;i<n;i++) cin>>h[i];
        for(i=0;i<n;i++) cin>>c[i];
        for(i=0;i<n;i++) aktd+=c[i];
        for(i=0;i<n;i++) akt+=h[i]*c[i];
        for(i=0;i<10002;i++) dod[i]=0;
        for(i=0;i<n;i++) if (dod[h[i]]+=c[i]);
        long long wyn=10065009565760346LL;
        for(i=0;i<10002;i++) 
        {
            
            wyn = min(wyn,akt);
            aktd-=2*dod[i];
            akt-=aktd;
            
        }
        cout<<wyn<<"\n";
    }
 
    return 0;
}
 
