#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	 long long int test,index,i;
     long long int minmoves,sum=0;
	 
     scanf("%lld",&test);
     while(test--)
     {
     	scanf("%lld",&index);
   	    int a[index];
     	for(i=0;i<index;i++)
     	scanf("%lld",&a[i]);
     	
        sort(a,a+index);
     	for(i=1;i<index;i++)
     	sum+=a[i];
     	
     	sum = sum - (a[0]*(index-2));
     	minmoves=sum-a[0];
     	printf("%lld\n",minmoves);
     	minmoves=0;
     	sum=0;
     	
     }
}
     
     




