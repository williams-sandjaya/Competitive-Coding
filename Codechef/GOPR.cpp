#include<stdio.h>
#include<algorithm>
using namespace std;
 
int main()
{
    int i,tot,n,t,h1,h2,m1,m2,s1,s2;
    scanf("%d",&t);
    while(t--)
	{
	    scanf("%d%d%d",&h1,&m1,&s1);
	    scanf("%d%d%d",&h2,&m2,&s2);
		tot = abs(h1*60*60+m1*60+s1-h2*60*60-m2*60-s2);
	    n=tot/100;
		if(n%2==0)
	       printf("S\n");
	    else
	       printf("C\n");
    }
}
