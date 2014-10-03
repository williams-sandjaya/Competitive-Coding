#include<iostream>
#include<cstdio>

using namespace std;
 
const int maxN = 1000005;
int attack[maxN];
int N, M;
  
void solve()
{
scanf("%d%d", &N, &M);
 
for(int i=1; i<=N; i++)
attack[i] = N-i;
 
int winner, loser;
for(int i=0; i<M; i++)
{
    scanf("%d%d", &winner, &loser);
    attack[winner]--;
    attack[loser]++;
}
for(int i=1; i<=N; i++)
{
    if(attack[i] == 0)
    {
        printf("2 %d\n", i);
        return;
    }
}
printf("1\n");
 
}
 
int main()
{

     int t;
     scanf("%d", &t);
     while(t--)
     {
         solve();
     }
}
