#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int n,m;
int main() 
{
	cin >> n >> m;
	cout << n+m-1 << endl;
	for(int i=1;i<=m;i++) cout << 1 << " " << i << endl;
	for(int i=2;i<=n;i++) cout << i << " " << 1 << endl;
}
