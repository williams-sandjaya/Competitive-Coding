#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
char A[1000100];int h[1000100], m[1000100];long long sol;int lg;

inline bool srch(int pos, char wordd[]) 
{
	bool ret = true; int len = strlen(wordd);
	for (int i = pos, j = 0; j < len && ret; i++, j++)
		if (A[i] != wordd[j])
			ret = false;
	return ret;
}

int main() 
{
	cin >> A; lg = strlen(A);
	
	for (int i = 0; i < lg; i++) 
    {
		if (srch(i, "metal"))
			m[i] = 1; // mark the index if the string is present
		if (srch(i, "heavy"))
			h[i] = 1; // mark the index if the string is present
	}
	for (int i = 0; i < lg; i++)
		h[i] += h[i - 1]; // cumulative sum
		
	for (int i = lg - 1; i >= 0; i--) 
		if (m[i] == 1) 
			sol = sol + h[i - 1]; // add the cumulative sum
			
	cout << sol << endl;
}
