#include<cstdio>
#define MAXN 20001
int main()
{
    
    int t,n,k,i,ans,cnt;
    char a[MAXN]; bool flag;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d",&n,&k);ans=0;flag=0;
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        cnt=1;
        while(a[i]==a[i+1] && i<n) i++,cnt++;
        if(cnt>=k) flag=1;
        
        ans+=(cnt-1)/k +1;
    }
    
    if(flag)printf("%d\n",ans);
    else printf("-1\n");
    }
}
