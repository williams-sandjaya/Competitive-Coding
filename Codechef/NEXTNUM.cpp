#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <sstream>
#include <queue>
#include <stack>
#include <iomanip>
#include <ctime>
#include <limits.h>
#include <bitset>
#include <functional>
#include <numeric>
#include <complex>
using namespace std;
long long T,i,cnt[11],a[20],j,N,fact[20];fact[0]=1;

int main()
{
    for(i=1;i<=18;i++)
        fact[i]=fact[i-1]*i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&N);
        long long len=0,temp=N,ans=0,d=1;       
        while(temp)
        {
            a[len++]=temp%10;
            temp/=10;
        }        
        memset(cnt,0,sizeof(cnt));
        for(i=0;i<len;i++)
        {
            cnt[a[i]]++;
            d*=cnt[a[i]];
            for(j=0;j<a[i];j++)
            	if(cnt[j]>0)            
                	ans+=fact[i]/(d/cnt[j]);
        }               
        printf("%lld\n",ans+1);    
    }
}
