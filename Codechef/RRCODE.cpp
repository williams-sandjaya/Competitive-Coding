#include<cstdio>
#include<stdio.h>
using namespace std;
int min(int a, int b) {return a<b?a:b;}
void x(int& a, int b) { a^=b; }
void a(int& a, int b) { a&=b; }
void o(int& a, int b) { a|=b; }

int main () 
{
    int T;
    scanf("%d", &T);
    while(T--) 
	{
        int N, K, Ans;char opr[10];
        scanf("%d%d%d", &N, &K, &Ans);
        int A[N];
        for(int i=0; i<N; i++)
		    scanf("%d", &A[i]);
        scanf("%s", opr);
        
        if(opr[0]=='A')
        {
        	K=min(K,1);
        	while(K--)
                  for(int i=0; i<N; i++)
                      a(Ans, A[i]);
        }
		else if(opr[0]=='O')
        {
        	K=min(K,1);
        	while(K--)
                  for(int i=0; i<N; i++)
                      o(Ans, A[i]);      
        } 
		else if(opr[0]=='X')
        {
        	K&=1; // 1 if odd
        	while(K--)
                  for(int i=0; i<N; i++)
                      x(Ans, A[i]);
    	}
    	printf("%d\n", Ans);
    }
}
