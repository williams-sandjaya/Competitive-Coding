#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int main()
{
long long test=0,i,j,n,sum=0,ans=0,prod,temp;
int primes[30] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103};


    while(scanf("%lld",&n)!=EOF)
    {
                 
                 prod=1;
                 
                 for(i=0;i<30;i++)
                 {
                      temp=prod*primes[i];
                      if(temp>n)
                      break;    
                      prod=temp;        
                 }
                 
                 printf("%lld\n",prod);

    }

system("pause");
return 0;
}
