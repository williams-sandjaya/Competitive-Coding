#include<cstdio>
#include<algorithm>
using namespace std;

int gcd(int a, int b) 
{
    if(a%b==0) return b;
	else gcd(b%a,a);
}

int main() 
{
    int T;
    scanf("%d", &T);
    while(T--) 
	{
        int a, b;
        scanf("%d%d", &a, &b);
        if(a==1 || b==1)
        printf("%d\n", max(a, b));
        else
        printf("%d\n", 1+gcd(a-1, b-1));
    }
}
