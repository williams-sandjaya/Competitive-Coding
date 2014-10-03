#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long test=0,i,j,n,r,l,c,q;
scanf("%lld",&test);

    while(test--)
    {
             scanf("%lld%lld%lld",&n,&c,&q);
             while(q--)
             {
              
              scanf("%lld%lld",&l,&r);  
              if(l<=c && c<=r)
              c=r-(c-l);       
                       
             }    
             printf("%lld\n",c);

    }

system("pause");
return 0;
}
