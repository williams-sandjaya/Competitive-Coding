#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
int i,n,m,minus=0,plus=0,l,r;
 
cin>>n>>m;
int ar[n];
    for(i=0;i<n;i++)
    {
    
    cin>>ar[i];
    if(ar[i]==-1)
    minus++;
    
    else if (ar[i]==1)
    plus++;           
    }
    
        while(m--)
        {
                cin>>l>>r;
                int k=r-l+1;
                if ((k%2==0)&&(plus>=k/2)&&(minus>=k/2)) cout <<1<< endl;
                else cout <<0<< endl;
                
        }
//system("pause");
return 0;
}
