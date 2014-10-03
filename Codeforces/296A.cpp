/*
Note that after applying the operations of the exchange of any permutation. 
It's not hard to understand that the answer is yes, if you can place a single number that it would not stand in the neighboring cells. 
Thus, if met with a number of times, it must fulfill the condition C <= (n +1) / 2
*/

#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int n,x,a[1001],m=0;

int main()
{
	cin >> n;
	for (int i=0;i<n;i++)
    {
		cin >> x;
		a[x]++;
		if (a[x]>m) m=a[x];
	}
	if (m>(n+1)/2) puts("NO");
    else puts("YES");
}
