// generates prime numbers under 34000
#include<stdio.h>
#define MAX 34000000
int flag[MAX];
int main()
{
	int i,j,t,k;
	j=2;
	for(i=0;i<=MAX;i++) {flag[i]=0;}
	flag[0]=flag[1]=1;
	for(i=2;i<=MAX;i++)
	{
		j=i;
		while(flag[j]!=0)
		{
			j++;
		}
		for(t=2*j;t<=MAX;t=j+t)
		flag[t]=1;	
	}
	for(i=0;i<=3400000;i++){
		if(flag[i]==0)
		{printf("%d ",i);}
	}
	
}