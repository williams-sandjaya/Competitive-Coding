#include<stdio.h>
int main()
{
    int test;
    long long A,B;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld %lld",&A,&B);
        printf("%lld\n",B);
    }
    system("pause");
}
