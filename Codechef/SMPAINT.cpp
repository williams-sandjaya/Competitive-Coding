#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#define getcx getchar_unlocked
using namespace std;

inline int in( )
{
	int n=0;
	int ch=getcx();int sign=1;
	while( ch < '0' || ch > '9' )
	{
		if(ch=='-')
			sign=-1; 
		ch=getcx();
	}
	while( ch >= '0' && ch <= '9' )
		n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
	return n*sign;
}

int main() 
{
	int n;	
	n = in();
	int a[n+1][n+1],fill[n+1][n+1],sol[400000][5],count=0;
	
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++) 
		{
			a[i][j] = in();
			if(a[i][j]>0) 
				count++;
		}
	}
	
	printf("%d\n",count);
	
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++) 
		{
			if(a[i][j]>0) 
				printf("%d %d %d %d %d\n",a[i][j],i+1,i+1,j+1,j+1);
		}
	}
}
