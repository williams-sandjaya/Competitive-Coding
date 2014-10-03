/*
The number should only consist of digits 1 and 4.
The number should begin with digit 1.
The number should not contain three consecutive fours (i.e. 444).
*/

#include <string>
#include <iostream>
using namespace std;
int main()
{
    string n;
	cin>>n;
	
	if(n[0]=='1')
	{
		int cnt=0;
		for(int i=0; i<n.size(); i++)
		{
			if(n[i]=='4')
				cnt++;
			if(n[i]=='1')
				cnt=0;
			if(cnt>2||(n[i]!='1'&&n[i]!='4'))
			{
				cout<<"NO\n";
				return 0;
			}
		}
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
}
