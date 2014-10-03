#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> alone;
vector<int> G[100];
vector<int> team[3];
int used[100];

int dfs(int v, int c, int t)
{
    int d = 1;
    if (t < 3)
        team[t].push_back(v);
    used[v] = c;
    for (int i = 0; i < G[v].size(); i++)
        if (!used[G[v][i]])
            d += dfs(G[v][i], c, t + 1);

    return d;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
        if (G[i].size() == 0)
            alone.push_back(i);

    for (int i = 1; i <= n; i++)
        if (G[i].size() > 0 && !used[i])
        {
            int k = dfs(i, i, 0);
            if (k > 3 || k == 2 && alone.empty())
            {
                cout << -1;
                return 0;
            }

            if (k == 2)
            {
                team[2].push_back(alone.back());
                alone.pop_back();
            }
        }

    while (alone.size() > 0)
    {
        for (int i = 0; i < 3; i++)
        {
            team[i].push_back(alone.back());
            alone.pop_back();
        }
    }

    for (int i = 0; i < n / 3; i++)
        cout << team[0][i] << " " << team[1][i] << " " << team[2][i] << endl;
}
