#include<stdio.h>
#include<string.h>

int main()
{
    int n,k,i,click,opentweets=0;
    char temp[1005],tweets[1005],input[10];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        temp[i]='0';
        tweets[i]='0';
    }
    temp[i+1]=tweets[i+1]='\0';
    for(i=0;i<k;i++)
    {
        scanf("%s",input);
        if(strlen(input)>5)
        {
            opentweets=0;
            strcpy(tweets,temp);
            printf("0\n");
        }
        else
        {
            scanf("%d",&click);
            click--;
            if(tweets[click]=='0')
            {
                tweets[click]='1';
                opentweets++;
            }
            else
            {
                tweets[click]='0';
                opentweets--;
            }
            printf("%d\n",opentweets);
        }
    }
}   
