/*
The starting position can be anywhere with a footprint. The footprints can be categorized into 3 types.
1. only L s
2. only R s
3. R s followed by L s
In case 1, we end in the left of all footprints. 
In case 2, we end in the right of all footprints. 
In case 3, we either end in the rightmost R or the leftmost L
*/

#include <stdio.h>
#define N 1002
char s[N];
int rs, re, ls, le;

int main() 
{
	int i, n;ls=le=rs=re=-1;
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i=0; s[i]; i++) if (s[i]=='L') 
    {
		ls=i;
		break;
	}
	for (; s[i]; i++) if (s[i]=='L') le=i;
	
	for (i=0; s[i]; i++) if (s[i]=='R') 
    {
		rs=i;
		break;
	}
	for (; s[i]; i++) if (s[i]=='R') re=i;
	
	if (re==-1 && rs==-1) printf("%d %d\n", le+1, ls); // only L present
	else if (le==-1 && ls==-1) printf("%d %d\n", rs+1, re+2); // only R present 
	else printf("%d %d\n", rs+1, re+1); // R s followed by L s present
	return 0;
}
