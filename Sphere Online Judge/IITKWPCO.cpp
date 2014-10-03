#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int bin_search_index(long long int A[], long long imin, long long imax, long long key)
{
	if(imax < imin)
	   return -1;
	else
	{
		int imid = (imin+imax)/2;
		if (A[imid]>key)
		  return bin_search_index(A,imin,imid-1,key);
		if (A[imid]<key)
		  return bin_search_index(A,imid+1,imax,key);
		if (A[imid]==key)
		  return imid;
	}
}

int main()
{
	long long int i,t;
	cin>>t;
	while(t--)
	{
		long long int n,count=0;
		cin>>n;
		long long int ar[n];bool used[n];
		
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		
		for(i=0;i<n;i++)
		{
			used[i]=false;
		}
		
		for(i=0;i<n;i++)
		{
			if(used[i]==false && binary_search(ar,ar+n,ar[i]*2))
			{
			   int doublevalue_index=bin_search_index(ar,0,n,ar[i]*2);
			   if(used[doublevalue_index]==false)
			   {
			   	  count++;
			   	  used[i]=true;
			      used[doublevalue_index]=true;
			   }
			}
		}
		cout<<count<<endl;
	}
}
