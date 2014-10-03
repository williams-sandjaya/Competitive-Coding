#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
long long test=0,i,j,n,sum=0,ans=0;
                
    while(scanf("%lld",&n) && n!=0)
    {

    ans=0;
    if(n==1)
    {
        cout<<"0\n"; 
        continue;
    
    }
    else
    {
        while(n!=1)
        {
                 //  cout<<"n= "<<n;
           if(n%3==1)
           {
            n--;
           ans++;
           continue;
           }        
           if(n%3==0)
           {
           n=n/3;
           ans++;
           continue;
           }
           if(n%2==0)
           {
           n=n/2;
           ans++;
           continue;
           }
           else 
           {
           n--;
           ans++;
           continue;
           }
                   
                
        }
    }
    cout<<ans<<endl;
    //right->9,3,1
    //my - 5,4,2,1       

    }

//system("pause");
return 0;
}
