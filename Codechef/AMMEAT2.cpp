#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long test,i,j;
scanf("%lld",&test);

    while(test--)
    {
       
       long long n,k;
       scanf("%lld%lld",&n,&k);
       if(k==1) 
       {
       printf("1\n");
       continue;
       }
       else if(k>n/2) printf("-1\n");
       else
       {
           for(i=1;i<=k;i++)
           printf("%lld ",2*i);
           printf("\n");
       }
       
       
    }
    
system("pause");
return 0;
}
