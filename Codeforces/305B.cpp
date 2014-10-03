#include<iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int main()
{
    long long int p,q,n;
    cin>>p>>q>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    long long int t1,t2;
    for(int i=0;i<n;i++)
    {
    t1=(p-((ar[i]%1000000007)*(q%1000000007))%1000000007)%1000000007; // mod added to avoid overflow
    t2=q;
    q=t1;
    p=t2;
    }
    if(q==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    return 0;  
}
