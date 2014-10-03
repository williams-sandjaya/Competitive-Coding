#include <stdio.h>

#define i64 long long

bool isnum(char *str, i64 &n, char &op) // notice the & sign
{
	n = 0;
	if(str[0]<'0' || str[0]>'9') // checks only str[0] for validity
	{
		op = str[0];
		return false;
	}
	for(int i=0; str[i]; i++)
		n = n*10 + (str[i]-'0'); // gets the whole number
	return true;
}

int main()
{
	char token[30], op;
	int n;
	i64 ans, num;
	scanf("%d", &n);
	while(n--)
	{
		ans = 0;
		op = '+';
		while(scanf("%s", token)==1)
		{
			if(isnum(token, num, op)) // gets the num and op
			{
				switch(op)
				{
				case '+': ans += num; break;
				case '-': ans -= num; break;
				case '*': ans *= num; break;
				case '/': ans /= num; break;
				}
			}
			else if(op == '=')
			{
				printf("%lld\n", ans);
				break;
			}
		}
	}
	return 0;
}
