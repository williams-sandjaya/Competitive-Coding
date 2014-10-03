#include<stdio.h>
#include<algorithm>
#include<utility>
#include<cmath>
using namespace std;
pair<long long,long long>event[1000005];
long long n,i,j,x1,x2,y,y2,ans,prev,area[1000005];
int main()
{
    scanf("%lld",&n);
    j=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld %lld",&x1,&y,&x2,&y2);
        area[i]=abs(x2-x1)*abs(y2-y);
        event[j].first=x1;
        event[j].second=i;
        j++;
        event[j].first=x2;
        event[j].second=i;
        j++;
    }
    sort(event,event+j);

    ans=0;
    prev=-1;
    for(i=0;i<j;i++)
    {
        if(prev==-1)
        	prev=event[i].second;
        else if(event[i].second==prev)
        {
            ans=ans+area[prev];
            prev=-1;
        }
    }
    printf("%lld\n",ans);
}
