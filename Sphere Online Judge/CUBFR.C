
#include<stdio.h>
char ina[1000001];
int ar[1000001];

int main()
{
	int t, i, j, k, n, ans, temp, printing, sol, in, fi, mi;
	scanf("%d", &t);
	for(i=2;i<101;i++)
	{
		temp = i*i*i;
		printing = temp;
		while(temp<1000001)
		{
			ina[temp] = 1;
			temp = temp+printing;
		}
	}
	// now ina[] has marked all non-cube free number
	ans=2;
	ar[0]=0;ar[1]=1;
	for(i=2;i<1000001;i++)
	{
		if(ina[i]!=1)
			ar[ans++]=i;
	}
	for(j=1;j<=t;j++)
	{
		scanf("%d", &n);
		if(ina[n]==1)
			printf("Case %d: Not Cube Free\n", j);
		else
		{
			for(i=0;i<ans;i++)
			{
				in =0;
				fi = ans;
				while(in<=fi)
				{
					if(in==fi)
					{
						if(ar[in]==n)
						{
							sol= in;
							break;
						}
					}
					else
					{
						mi = (in+fi)/2;
						if(ar[mi]==n)
						{
							sol = mi;
							break;
						}
						else if(ar[mi]<n)
							in = mi +1;
						else 
							fi = mi-1;
					}
				}
				printf("Case %d: %d\n", j, sol);
				break;
			}
		}
	}
	return 0;
}
