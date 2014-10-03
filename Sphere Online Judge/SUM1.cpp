#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int main()
{
long long test=0,i,j,n,sum=0,ans=0,ans1,ans2;

scanf("%lld",&test);

    while(test--)
    {
     scanf("%lld",&n);
     n--;
     ans=n/3;
     ans1=n/5;
     ans2=n/15;
     sum = 3*((ans*(ans+1))/2) + 5*((ans1*(ans1+1))/2) - 15*((ans2*(ans2+1))/2);
     cout<<sum;


    }

system("pause");
return 0;
}
