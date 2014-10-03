#include<stdio.h>
int cnt,t,id;
char str[10000005];

void func(int a,int b,int p,int q) // a<b  p<q
{
    while(a<p) 
    {
        a++;
        if(a==b && b<q)
        {
            b++;
            str[id++]='R';
            str[id++]='+';
            cnt++;
        }
        str[id++]='L';
        str[id++]='+';
        cnt++;
    }
    while(a>p)
    {
        a--;
        str[id++]='L';
        str[id++]='-';
        cnt++;
    }
    while(b<q)
    {
        b++;
        str[id++]='R';
        str[id++]='+';
        cnt++;
    }
    while(b>q)
    {
        b--;
        str[id++]='R';
        str[id++]='-';
        cnt++;
    }
}

int main()
{
    int n,a,b,p,q,i;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        id=0;
        scanf("%d",&n);
        scanf("%d %d",&a,&b);
        for(i=1;i<n;i++)
        {
            scanf("%d %d",&p,&q);
            func(a,b,p,q);
            a=p;
            b=q;
        }
        printf("%d\n",cnt);
        str[id]='\0';
        printf("%s\n",str);
        for(i=0;i<=id;i++)
        	str[i]=0;
    }
}
