#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;

int a[110] = {0};
int x[110] = {0};
int y[110] = {0};

int main()
{
	int n;
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> x[i] >> y[i]; // bottle of a brand + brand it can open stored 
		
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			if (i!=j && y[i]==x[j])
				a[j]=1; // (bottles of the same brand > 1) OR (asking to open bottle of another brand)
	int tot=0;
	for (int i=1; i<=n; i++)
		if (a[i]) tot++; // bottles that can be opened
	cout << n - tot << endl; // bottles that cannot be opened
	return 0;
}
