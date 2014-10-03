#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{    
int t;
scanf("%d",&t);    
 
    while(t--) 
    {   
    int n,i,j=0,p,q,index[125];    
     
    for(i=97;i<=122;i++)
    index[i]=0;
     
    string c,s,t,t2;
    cin>>t;
    cin>>t2;
    t=t+t2;
     
    scanf("%d",&n);   
    cin>>c;
    n--;
     
        while(n--)
        {                
            cin>>s;
            c=c+s;
            s.clear();
        }
     
     
     
    p=t.length();
    q=c.length();
     
    for(i=0;i<q;i++)
    index[c[i]]++;                
     
    for(i=0;i<p;i++)
    index[t[i]]--;                
     
        for(i=97;i<=122;i++)
        {
            if(index[i]<=0)
            j++;                    
        }
     
    if(j==26)
    printf("YES\n");
    else
    printf("NO\n");
     
    }
return 0;
}      
