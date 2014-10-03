#include<algorithm>
#include<cstdio>
using namespace std;
typedef pair<int,int> pi;
int sqr(int x) {return x*x;}

int dist(pi A,pi B)
{
   return sqr(A.first-B.first)+sqr(A.second-B.second);
}

int area(pi A,pi B,pi C)
{
   return A.first*(B.second-C.second)+B.first*(C.second-A.second)+C.first*(A.second-B.second);
}

int check(pi A,pi B,pi C)
{
   int a=dist(A,B),b=dist(B,C),c=dist(C,A);
   if((a+b==c || c+a==b || b+c==a) && area(A,B,C)!=0) return 1;
   return 0;
}

int main()
{
   int T,ans=0;
   scanf("%d",&T);

   while(T--)
   {
      pi A,B,C;
      scanf("%d%d",&A.first,&A.second);
      scanf("%d%d",&B.first,&B.second);
      scanf("%d%d",&C.first,&C.second);
      if(check(A,B,C)) ans++;
   }
   printf("%d\n",ans);
}
