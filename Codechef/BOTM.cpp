#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int t,n,a1,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		x=n;
		while(x--)
		      cin>>a1;
		      
		if(n%2!=0)
		{
			x=n/2;
			cout<<x*(x+1)<<endl;
		}
		else if(n%2==0)
		{
			x=n/2-1;
			cout<<(x+1)*(x+1)<<endl;
		}
	}
}
