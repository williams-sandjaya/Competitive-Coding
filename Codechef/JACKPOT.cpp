#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <fstream>
#include <stack>
#include <string>
#include <vector>
#include <list>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
typedef long long LL;

int main()
{
	int t, end, n, totalones, cost, ones;
	scanf("%d", &t);

	while(t--) 
	{
		scanf("%d", &n);
		bitset<32> bit(n);
		end = 0, totalones = 0;
		for(int i = 0; i < 32; i++) 
		{
			if (bit[i] == 1) 
			{
				end = i+1; // last one position
				totalones++;
			}
		}
		cost = (totalones-1) + (end-1);
		ones = 0;	
		for(int i = 0; i < end; i++) 
		{
			if (bit[i] == 1) 
			{
				ones++;
				cost = min(cost, max(totalones-1-ones + end-1, ones-1 + i));
			}
		}
		if (bit[end-1] == 1 && bit[end-2] == 0)
			cost = min(cost, end-2 + (totalones+2)/2-1);
		printf("%d\n", cost);
	}	
}
