#include <cstdio>
using namespace std;
const int MAX = 20002;
struct pred { int p; char c; } pre[MAX];
bool flag[MAX];
int n, Q[MAX];

void bfs(int s) 
{
	int qh, qt, p[2], i, u;qh = qt = 0;
	Q[qt++] = s; // enqueue
	flag[s] = 1; // mark the vertex
	pre[s].p = -1;
	pre[s].c = '1';
	while(qh < qt) // while queue is not empty
    {
		u = Q[qh++]; // dequeue
		p[0] = (u*(10%n))%n ; // left node
		p[1] = (p[0]+1)%n ; // right node
		for(i=0; i<=1; i++) 
        {
			if(!flag[p[i]]) // if vertex is unmarked
            {
				pre[p[i]].p = u;
				pre[p[i]].c = '0'+i;
				if(!p[i]) return;
				flag[p[i]] = 1; // mark the visited vertex
				Q[qt++] = p[i]; // enqueue
			}
		}
	}
}

void print_path(int u) 
{
	if(u==-1) return;
	print_path(pre[u].p);
	putchar(pre[u].c);
}

int main() 
{
	int t, i;
	scanf("%d", &t);
	while(t--) 
    {
		scanf("%d", &n);
		if(n==1) 
        {
			puts("1");
			continue;
		}
		for(i=0; i<n; i++) flag[i] = 0;
		bfs(1);
		print_path(0);
		putchar('\n');
	}
	return 0;
}
