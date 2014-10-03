#include<stdio.h>
int reverse(int N)
{
    int rev=0,rem=0;
    while(N)
    {
        rem=N%10;
        rev=rev*10+rem;
        N=N/10;
    }
    return rev;
}
int main()
{
    int test;
    int N,M;int ans;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&N);
        scanf("%d",&M);
        ans=reverse(N)+reverse(M);
        ans=reverse(ans);
        printf("%d\n",ans);
}
return 0;
}
