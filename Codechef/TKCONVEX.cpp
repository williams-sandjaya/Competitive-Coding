#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct number
{
    int no,key;
}arr[1001],arr2[1000];
 
typedef int (*compfn)(const void*, const void*);
 
int compare(struct number *elem1, struct number *elem2)
{
   if ( elem1->no < elem2->no)
      return -1;
 
   else if (elem1->no > elem2->no)
      return 1;
 
   else
      return 0;
}
 
int main()
{
    int i,j,n,k,flag,x,l;
    long long sum;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i].no);
        arr[i].key=i+1;
    flag=0;    
    }
    qsort((void*)&arr,n,sizeof(struct number),(compfn)compare);
    for(i=0;i<=n-2*k;i++)
    {
        sum=0;
        for(j=0;j<k-1;j++)
        sum+=arr[i+j].no;
        if(sum>arr[i+k-1].no)
        {
            flag=1;
            x=i;
            break;
        }
    }
    if(flag==0)
    {
        printf("No\n");
        goto xy;
    }
    l=0;
    //cout<<x<<endl;
    for(i=0;i<n;i++)
    {
        if(i==x) i+=k;
        arr2[l++]=arr[i];
    }
    //for(i=0;i<l;i++)
    //printf("%d ",arr2[i].no);
    for(i=0;i<=l-k;i++)
    {
        sum=0;
        for(j=0;j<k-1;j++)
        sum+=arr[i+j].no;
        
        if(sum>arr[i+k-1].no)
        {
            flag=1;
            break;
        } 
    }
    if(flag==0)
    {
        printf("No\n");
        goto xy;
    }
    printf("Yes\n");
    for(j=0;j<k;j++)
    {
        printf("%d ",arr[x+j].key);
    }
    for(j=0;j<k;j++)
    {
        printf("%d ",arr2[i+j].key);
    }
    printf("\n");
    xy:
    return 0;
    
} 
