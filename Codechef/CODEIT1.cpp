#include<cstdio>
#include<iostream>
using namespace std;
 
int main()
{
    long long test=0,v,t,n,sum=0;
    cin>>test;
    while(test--)
    {
      cin>>n;
      sum=0;
      while(n--)
      {
                
                
          cin>>v;
          cin>>t;
          sum+=v*t;
      }
      cout<<sum<<"\n";
    }
    return 0;
}
 
