#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<math.h> 
#include<vector>
#include<set>
#include<map> 
#include<string.h> 
#include<cstdlib>
using namespace std;
 
int countSubstring(const string& str, const string& sub) // returns count of non-overlapping occurrences of 'sub' in 'str'
{
    if(sub.length() == 0) 
		return 0;
    int count = 0;
    for(size_t offset = str.find(sub); offset != string::npos; offset = str.find(sub, offset + 1))
        count++;
    return count;
}
 
int main()
{
	int t,n,k; char st[10];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		string str = "", sub="";
		int i;
		for(i=1;i<=n;i++)
		{
			sprintf(st, "%d", i);
			str.append(st);
		}
		sprintf(st, "%d", k);
		sub.append(st);
		printf("%d\n",countSubstring(str,sub));	
	}
}
