#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>
#include<stack>
#include<string>
#include<set>
using namespace std;
vector<int> v; set <int> s[100005]; long long int x, T,X,Y,Q,N,lol;

int dfs(long long int pos,int parent)
{
	int tmp;
	v.push_back(pos);
	x--;
	if(x<=0)
		return 1;
	for(set<int>::iterator it=s[pos].begin();it!=s[pos].end();it++)
		if((*it)!=parent)
		{
			tmp=dfs(*it,pos);
			if(tmp==1)
				return 1;
		}
	v.pop_back();
	return tmp;
}

int main()
{
	cin>>T;
	while(T--)
	{
		v.clear();
		cin>>N>>Q;
		for(int i=0;i<=N;i++)
			s[i].clear();
		for(int i=0;i<N-1;i++)
		{
			cin>>X>>Y;
			s[X].insert(Y);
			s[Y].insert(X);
		}
		x=Q%N;
		lol=Q/N+1;
		if(x==0)
		{
			x=N;
			lol--;
		}
		dfs(lol,0);
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
}
