#include <cstdio>
main()
{
    long long T,n,k,y,x,i,X,Y,ans;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&n),
        ans = 0;
        
            for(i = 2;i <= n / i;++i)
            {
                k = n / (i * i),
                y = k * i * i,
                x = k * (i - 1) * (i - 1);
                
                if(x * y > ans)
                {
                    ans = x * y;
                    X = x;
                    Y = y;
                }
            }

        printf("%lld*%lld\n",X,Y);
    }
}
