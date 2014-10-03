#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	unsigned long long t,n,a;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<(n*(n-1))/2<<"\n";
		while(n--)
		cin>>a;
	}
}
