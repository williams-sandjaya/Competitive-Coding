#include <ios>
#include <algorithm>
int main()
{
long long a,c,t,b;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&a);
c=1;

for(b=a+1;b<=2*a+1;b++)
if((a*b+1)%(b-a)==0)
c=b+(a*b+1)/(b-a);


printf("%lld\n",c);
}
return 0;
}


//arctan(x) + arctan(y) = arctan ( ( x + y)/( 1 - xy) )
//arctan 1/x + arctan 1/y = arctan(x+y/xy-1)
//satisfy this and min of x+y
