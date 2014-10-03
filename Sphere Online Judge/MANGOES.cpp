#include<cstdio>
int main()
{
    long long t=0,n,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",((((n-1)/2))*((n-1)/2))%n);
    }
    
return 0;
}


/*
#include<cstdio>
#include<conio.h>
int gcd(int a, int b)
{
	while(b) return gcd(b,a%b);
	return a;
}
int main()
{
    int test,n,ans, i;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);ans=0;
            for(i=1;i<n-1;i++)
            {
            if(gcd(i,i+1)==1 && gcd(i+1,i+2)==1 && gcd(i,i+2)==1)
            ans+=i;
            }
        printf("%d\n",ans%n);
    }
getch();
}*/
