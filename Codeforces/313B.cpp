#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX 100020
using namespace std;
char str[MAX];

struct data
{
    int cnt;
    char lval,rval;
};
data tree[MAX<<2];

data make_data(char val)
{
    data res;
    res.cnt = 0;
    res.lval = val;
    res.rval = val;
    return res;
}

data combine_all_data(data l,data r)
{
    data res;
    if(l.rval==r.lval)
        res.cnt = l.cnt + r.cnt + 1;
    else
        res.cnt = l.cnt + r.cnt ;
    res.lval = l.lval;
    res.rval = r.rval;
    return res;
}

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = make_data(str[b]);
        return ;
    }
    int mid = (b+e)/2;
    build(2*node,b,mid);
    build(2*node+1,mid+1,e);
    tree[node] = combine_all_data(tree[2*node],tree[2*node+1]);
}

data query(int node,int b,int e,int i,int j)
{
    if(b>=i && e<=j)
        return tree[node];
    int mid = (b+e)/2;
    if(j<=mid)
        return query(2*node,b,mid,i,j);
    if(i>mid)
        return query(2*node+1,mid+1,e,i,j);
 
    return combine_all_data(query(2*node,b,mid,i,j),query(2*node+1,mid+1,e,i,j));
}
 
int main()
{
    int t,n,q;
    int ii,jj;
    scanf("%s",str+1);
    n = strlen(str+1);
    
    scanf("%d",&q);
    build(1,1,n);
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&ii,&jj);
        data d = query(1,1,n,ii,jj);
        printf("%d\n",d.cnt);
    }
 
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define INF 100005
using namespace std;
char str[INF];
int Ans[INF];
int main()
{
	int n,m,i;
	scanf("%s",str); n=strlen(str);
	for (i=1;i<n;i++)
		Ans[i]=Ans[i-1]+(str[i-1]==str[i]);
	for (i=scanf("%d",&m);i<=m;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%d\n",Ans[r-1]-Ans[l-1]);
	}
	return 0;
}
*/
