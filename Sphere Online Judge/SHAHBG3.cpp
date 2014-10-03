#include<cstdio>
#include<algorithm>
using namespace std;
void *memset(void *s, int c, size_t n);
int main()
{
    int array[20002];
    int i,number;int answer=1;int ppl;
    memset (array, 0, sizeof(array));
    scanf("%d",&number);
    
    scanf("%d",&ppl);
    array[ppl]++;
    printf("%d\n",answer);
    
     for(i=1;i<number;i++)
    {   
        scanf("%d",&ppl);
        array[ppl]++;
        if ((array[ppl+1]==1) || (array[ppl-1]==1) ) answer=answer;
        if ((array[ppl+1]==1) && (array[ppl-1]==1) ) answer--;
        if ((!array[ppl+1]==1) && (!array[ppl-1]==1) ) answer++;
        
         
        printf("%d\n",answer);
    }

printf("Justice\n");
system("pause");
return 0;

system("pause");
}
