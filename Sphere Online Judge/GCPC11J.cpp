#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
vector<int> V[100010];
int vis[100010],dist[100010],k;
 
/*
This problem can be solved using 2 dfs. 
First you can chose any arbitrary node and run dfs and find out distance to all other node from this chosen node. 
Now the node which has the greatest distance , run dfs from this node and find out maximum distance.
*/
 
void dfs(int v,int n)
{  
    vis[v]=1;
    dist[v]=n;
    for(int u=0;u<V[v].size();u++)
     if(!vis[V[v][u]])
       dfs(V[v][u],n+1); 
}
    
int main()
{
  int n,test,t1,t2;
    cin >> test;
    
  while(test--)
    {
         cin>>n;
         for(int i=0;i<n;i++)
          V[i].clear(),vis[i]=0;
          
         for(int i=0;i<n-1;i++)
          {
             scanf("%d%d",&t1,&t2);
             t1++;t2++;
             V[t1-1].push_back(t2-1);
             V[t2-1].push_back(t1-1);
          }
         dist[0]=0;
         dfs(0,0);
           
         int node=0;
         for(int i=0;i<n;i++)
          if(dist[i]>dist[node])
            node=i;
             
         memset(vis,0,sizeof(vis)); 
   
         dfs(node,0);
           
         sort(dist,dist+n);
         cout<<((1+dist[n-1])>>1)<<endl; 
   }
}
