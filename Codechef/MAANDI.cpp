#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<stack>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<utility>
using namespace std;

bool overlucky(int n) 
{
	while(n>0) 
	{
		if(n%10==4 || n%10==7)
		   return true;
		n /= 10;
	}
	return false;
}
 
int main () 
{ 
	int t,n,ans,l;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		ans=0,l=sqrt(n);
		for(int i=1; i<=l; i++)
		{
			if(n%i==0) 
			{
				if(overlucky(i))
				   ans++;
				if((n!=i*i) && (overlucky(n/i))) // i^2 != n
				   ans++;
			}
		}
		cout<<ans<<endl;
	}
}
