#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int v[10000];

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
    {
      int q,w;
      cin>>q>>w;
      v[q]++;
      v[w]++;
    }
  cout<<n-1<<endl; // n-1 roads need to be constructed always
  int ans;
  for(int i=1;i<=n;i++)
    if(v[i]==0)
      ans=i; // largest city which can be connected
  for(int i=1;i<=n;i++)
    if(ans!=i)
      cout<<ans<<" "<<i<<endl; // connect all cities with that city
}
