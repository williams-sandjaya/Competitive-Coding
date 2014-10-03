#include<cstdio>
#include<cstring>
#define size 30000
int main()
{
int i,j,f,cnt,t;
scanf("%d",&t);
 
	while(t--)
	{
	char s1[size],s2[size];
	scanf("%s%s",s1,s2);
	f=0;i=0;cnt=0;
		for(j=0;j<strlen(s2);)
		{
			if(s1[i]==s2[j])
			{
			cnt++;
			i++;
			j++;
			}
			else
			j++;
		}
		if(cnt==strlen(s1))
		f=1;i=0;cnt=0;
		for(j=0;j<strlen(s1);)
		{
			if(s2[i]==s1[j])
			{
			cnt++;
			i++;
			j++;
			}
			else
			j++;
		}
		if(cnt==strlen(s2))
		f=1;
		if(f==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
return 0;
}
