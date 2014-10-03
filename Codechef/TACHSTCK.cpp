// Rajarshi Sarkar, BIT Mesra
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{   
    int i,j,k,l,m,n,ans=0;
    cin >> n >> k;
    int ar[n];
    for(i=0;i<n;i++)
    cin >> ar[i];
    sort(ar,ar+n);
    
    for(i=0;i<n-1;i++)
    {
      if(ar[i+1]-ar[i]<=k)
      {
          ans++;
          i++;
      }
    }
    cout << ans << endl;
}
 
