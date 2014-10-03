#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n,i;
    scanf("%d",&n);
    
    int *list;
    list=(int*)malloc(n*sizeof(int));
    
    double a;
    for(i=0;i<n;i++)  scanf("%d",&list[i]);
    
    for(i=0;i<n;i++)
    {
        if(list[i]==0)
        printf("1\n");
        else
        {
            a=list[i];
            while(list[i]>1)
            {
                a=a*(list[i]-1),
                list[i]--;
            }
            printf("%1.f\n",a);
        }
    }
    
    system("pause");
}                          
