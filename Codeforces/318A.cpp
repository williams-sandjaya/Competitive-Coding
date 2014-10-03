#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
int main()
{
    long long int test=0,i,j,n,k,sum=0,ans=0;
    cin >> n >> k;
    
        if(n%2==1) 
        {
            n++;
            if (k<=n/2) cout<<1+(k-1)*2<<endl;
            else if(k>n/2) cout << (k-n/2)*2<<endl;
            return 0;
        }
        
        if(n%2==0)
        {
            if (k<=n/2) cout<<1+(k-1)*2<<endl;
            else if(k>n/2) cout << (k-n/2)*2<<endl;
        }
        
    return 0;
}
