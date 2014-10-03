/*
Since your push sequence is in ascending order, then when you see a number N in your pop queue, 
then all numbers that is below N and not yet popped, must be popped in descending order.
(http://stackoverflow.com/questions/17822944/how-to-test-a-pop-order-is-legal-or-not)
*/
#include<iostream>
using namespace std;
int main()
{
	int t,n,flag;
	char s[10];
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		cin>>s;
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					if((s[i]-'0')>(s[k]-'0') && (s[k]-'0')>(s[j]-'0'))
						flag=1;
				}
				if(flag==1)
					break;
			}
			if(flag==1)
				break;
		}
		if(flag==1)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
}
