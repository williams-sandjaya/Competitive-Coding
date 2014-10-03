#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int main()
{
long long test=0,n,m,x,y;
cin>>test;

    while(test--)
    {
     cin>>n>>m;
     cin>>x>>y;
     cout<<max(x-1,n-x)+max(y-1,m-y)<<endl;
    }

system("pause");
return 0;
}
