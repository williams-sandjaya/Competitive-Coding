#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int getint(char *s)
{
	int i, n = 0;
	for(i=0;s[i];i++)
	{
		if(!isdigit(s[i])) return -1; //  agar kahin pe achanan se number nahi mila tho return -1
		
		n = n*10+s[i]-'0'; // string ko number mein convert kar raha hai
	}
	return n;
}

int main()
{
	char str[100], *p;
	int t, i, a[3];
	scanf("%d", &t);
	for(gets(str); t; t--)
	{
		gets(str);
		gets(str);
		i = 0;
		p = strtok(str," +="); // split str into tokens
		while(p)
		{
			a[i++] = getint(p); // ek token lega ek baar mein
			p = strtok(NULL," +="); // p ka next token traverse karwa raha hai
			// This end of the token is automatically replaced by a null-character 
            // by the function, and the beginning of the token is returned by the function.
		}
		if(a[0]==-1) printf("%d + %d = %d\n",a[2]-a[1], a[1], a[2]);
		else if(a[1]==-1) printf("%d + %d = %d\n",a[0], a[2]-a[0], a[2]);
		else printf("%d + %d = %d\n",a[0], a[1], a[0]+a[1]);
	}
	return 0;
}
