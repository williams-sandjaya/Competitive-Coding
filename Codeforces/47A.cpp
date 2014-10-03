#include <iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int n,f=0,test=0,i;
scanf("%d",&test);
int s=test;
 
    while(test--)
    {
                 cin>>n;
        for(i=1;i<=n;i++)
        {
            if(i*(i+1)/2==n)
            {
            printf("YES\n");
            f=1;
            break;
            }
        }
        if (f!=1)cout<<"NO\n";
        f=0;
        
    }
    if(s!=0) cout<<"KILL BATMAN\n";
return 0;
}
