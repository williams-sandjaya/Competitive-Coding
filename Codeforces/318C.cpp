#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	long long n,m,r,ans = 0;
	cin >> n >> m >> r;
	
	if(max(n,m) >= r) 
    {
		printf("0\n");
		return 0;
	}
	
	if(n <= 0 && m <= 0) 
    {
		printf("-1\n");
		return 0;
	}
	
	if(n > m) swap(n,m); // keep n as the min number
	
	if(n < 0) // trick
    {
		ans += (-n) / m; // ans is the number of steps
		n += ans * m; // make n positive
	}
	
	while(max(n,m) < r) 
    {
		ans ++; // ans is the number of steps
		if(n > m) swap(n,m); // keep n as the min number
		n += m;
	}
	
	cout << ans << endl;
	return 0;
}
