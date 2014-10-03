#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;
vector<int> graph[100];int level[100];int n, e, t;unsigned long long result;

void solve(int current, int depth)
{
	if(level[current] != -1)
    {
		if(depth - level[current] > 2)
			result *= (unsigned long long)(depth - level[current]);
		return;
	}
	level[current] = depth;
	for(int i = 0; i < (int)graph[current].size(); i++)
		solve(graph[current][i], depth + 1);	
}

int main() 
{
	cin >> t;
	for(int c = 1; c <= t; c++)
    {
		cin >> n >> e;
		for(int i = 0; i < n; i++)
			graph[i].clear();
		
		int v, w;
		for(int i = 0; i < e; i++)
        {
			cin >> v >> w;
			graph[v - 1].push_back(w - 1);
			graph[w - 1].push_back(v - 1);
		}

		memset(level, -1, sizeof(level));
		result = 1;
		solve(0, 0);
		cout << "Case " << c << ": " << result << endl;
	}
	return 0;
}
