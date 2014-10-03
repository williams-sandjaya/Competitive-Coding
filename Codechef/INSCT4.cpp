#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
#define PB push_back
#define MAXN 2222
#define MAXM 111
int a[MAXM], cool[MAXN] = {0};
vector<int> adj[MAXN];
bool vis[MAXN] = {false};
queue<int> Q;

void Solve()
{
    int n, m, r, i, j, k, u, v;
    cin>>n>>m>>r;
    
    for(i = 0; i < n; i++)
	{
        for(j = 0; j < m; j++)
		{
            cin>>a[j];
            for(k = 0; k < j; k++) // link the recent element to the previous elements of the same sequence
			{
                adj[a[k]].PB(a[j]);
                adj[a[j]].PB(a[k]);
            }
        }
    }
    
    memset(cool, -1, sizeof(cool)); // cuz not connected nodes have -1 coolness
    memset(vis, false, sizeof(vis));
    Q.push(42); cool[42] = 0; vis[42] = true;
    
    while(!Q.empty()) // BFS Algo
	{
        u = Q.front();
        Q.pop();
        for(j=0; j<adj[u].size(); j++)
		{
            v = adj[u][j];
            if(vis[v] == false)
			{
                cool[v] = cool[u] + 1;
                vis[v] = true;
                Q.push(v);
            }
        }
    }
    
    for(i = 0; i < r; i++)
	{
        cin>>j;
        printf("%d ", cool[j]);
    }
    cout<<endl;
    return;
}

int main()
{
    Solve();
}
