#include <stdio.h>
int main()
{
    
    int test=0;
    scanf("%d",&test);
  //  return 0;
    while(test--)
    {
                 long long int n;long long ans=1;int i;
                 scanf("%lld",&n);
                 if(n<=4) printf("%lld\n",n);
                 else
                 {
                     if (n%3==0)
                     {
                                n=n/3;
                                ans=1;
                                for(i=0;i<n;i++) ans=(ans*3)%1000000007;
                                //long long ans=(long long)pow(3,n);
                                printf("%lld\n",ans%1000000007);
                     }
                     else if(n%3==1)
                     {
                                n=n/3;
                                ans=1;
                                for(i=0;i<n-1;i++) ans=(ans*3)%1000000007;
                                ans=(ans*4)%1000000007;
                                printf("%lld\n",ans%1000000007);    
                     }
                     else if(n%3==2)
                     {
                                n=n/3;
                                ans=1;
                                for(i=0;i<n;i++) ans=(ans*3)%1000000007;
                                ans=(ans*2)%1000000007;
                                printf("%lld\n",ans%1000000007);
                     }
                 }
    }
 
return 0;
//getch();
}

