#include<stdio.h>
int main()
{
    int test,N,A,D,ans;
    scanf("%d",&test);
    while(test--)
  {  scanf("%d %d %d",&N,&A,&D);
    ans= N*A+ (D*((N-1)*N))/2;
    printf("%d\n",ans);
}
return 0;
}
