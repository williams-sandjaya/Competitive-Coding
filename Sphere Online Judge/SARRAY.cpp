#include<cstdio>
#include<cstring>
#include<algorithm>
#include <iostream>
using namespace std;
char str[50005];int s[50005];long long l;
 
int cmp(const void *a,const void *b) 
{
    return (strcmp((str+ *((int*)a)),(str+ *((int*)b))));
}
 
void suffix_array(int n) 
{
    for(int i=0;i<n;i++) s[i]=i;
    qsort(s,n,sizeof(int),cmp);
}
 
void lcp(void) 
{
    for(long long i=0;i<l;i++) 
    cout << s[i] <<endl;                    
}
 
int main() 
{
    scanf("%s",str);
    l = strlen(str);
    suffix_array(l);
    lcp();
    return 0;
}
