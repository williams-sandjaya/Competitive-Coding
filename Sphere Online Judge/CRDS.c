#include<stdio.h>
int main()
{
int i,t;
    long long int q,w,p,n; long long int e,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%lld",&n);
                    q=3*n;
                    w=q+1;//w=3n+1
                    e=n*w;//e=n(3n+1)
                    r=e/2;//n(3n+1)/2
                    p=r%1000007;
                    printf("%lld\n",p);
                    }
                    system("pause");
                    }



