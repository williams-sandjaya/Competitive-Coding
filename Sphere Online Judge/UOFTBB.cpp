#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
long long test=0,i,l,c,r,d,n,m,h,beg,end;
cin>>test;

    while(test--)
    {
         cin>>l>>n;
         long long ar[l+1];
         memset(ar,0,sizeof(ar));
         while(n--)
         {
         cin>>c>>r>>d;
         beg = c-r>0?c-r:1;
         end = c+r<=l?c+r:l;
         for(int i=beg;i<=end;i++)
         ar[i]+=d;
         }
         cin>>m;
         while(m--)
         {
            cin>>h;
            for(i=0;i<=l;i++)
            {
                h=h-ar[i];
                if(h<=0)
                {
                cout<<i<<endl;
                break;
                }
            }
            if(h>0)
            cout<<"Bloon leakage\n";
         }
    }
//system("pause");
return 0;
}
