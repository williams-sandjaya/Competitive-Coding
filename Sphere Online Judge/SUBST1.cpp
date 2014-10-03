#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char str[50005];int s[50005];long long l;

int cmp(const void *a,const void *b) 
{
	return (strcmp((str+ *((int*)a)),(str+ *((int*)b))));
}

void suffix_array(int n) 
{
	for(int i=0;i<n;i++) 
		s[i]=i;
	qsort(s,n,sizeof(int),cmp);
}

long long lcp(void) 
{
	long long count = 0,i;char *z = str, *y = str;
	
	for(i=1;i<l;i++) 
    {
		z = str + s[i];
		y = str + s[i-1];
		while(*z==*y) 
        {
			count++;
			z++;
			y++;
		}
	}
	return count;
}

int main() 
{
	int n;
	scanf("%d",&n);
	while(n--) 
    {
		scanf("%s",str);
		l = strlen(str);
		suffix_array(l);
		printf("%lld\n", (l*(l+1)/2)-lcp());
	}
	return 0;
}
