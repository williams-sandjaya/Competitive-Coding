#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;cin>>m>>n;
		int arr[m][n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		
		int count1=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(arr[j][i]==1){count1++;break;}
	
		int count2=0;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				if(arr[i][j]==1){count2++;break;}

		cout<<min(count1,count2)<<endl;
	}
}
