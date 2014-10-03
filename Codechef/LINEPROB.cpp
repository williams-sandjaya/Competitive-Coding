#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(b%a==0)
	   return a;
	else
	   gcd(b%a,a);
}

int main()
{
	long long t,x1,x2,y1,y2,m,n;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2;
		m=abs(x1-x2);
		n=abs(y1-y2);
		if(m==0 || n==0) 
		   cout<<"0"<<endl;
		else
		   cout<<m+n-gcd(m,n)<<endl;
	}
}
