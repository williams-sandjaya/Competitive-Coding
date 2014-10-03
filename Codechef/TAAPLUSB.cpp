#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	long long t,n;
	double E[100000]={0},ans; 
	E[0]=0.45;
	for(int i=1;i<100000;i++)
		E[i]=0.45+0.1*E[i-1];
	for(int i=1;i<100000;i++)
		E[i]+=E[i-1];	
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		printf("%.14lf\n",E[n-1]);	
	}	
}
