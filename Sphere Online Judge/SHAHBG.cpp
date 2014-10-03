#include<cstdio>
#include<stdlib.h>
void *memset(void *s, int c, size_t n);
int main()
{
int array[20002],ans[10010];
int ppl,i,j,number;int max,min,answer=0;
scanf("%d",&number);
memset (array, 0, sizeof(array));
/*for(i=0;i<=20001;i++)
{array[i]=0;}*/

for(i=0;i<number;i++)
{
    scanf("%d",&ppl);
    array[ppl]++;              
          if(i==0){max=min=ppl;}
          if(i!=0)
                  {max=ppl>max?ppl:max;
                  min=ppl<min?ppl:min;}
                  
                  for(j=min;j<=max;j++)
                  {
                      if(array[j]==1 && array[j+1]==0)  answer++;  
                                   
                                       
                                       }
                                     //  if(answer==0) {answer++;}
                  ans[i]=answer;
                  answer=0;
                  }
                  /*for(j=min;j<=max;j++)
                  {printf("%d",array[j]);}*/
                 for(i=0;i<number;i++) printf("%d\n",ans[i]);
                  
                  printf("Justice\n");
                  system("pause");
return 0;
// http://ideone.com/GVCPAI
}
